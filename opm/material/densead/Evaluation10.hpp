// -*- mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
// vi: set et ts=4 sw=4 sts=4:
/*
  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.

  Consult the COPYING file in the top-level source directory of this
  module for the precise wording of the license and the list of
  copyright holders.
*/
/*!
 * \file
 *
 * \brief This file specializes the dense-AD Evaluation class for 10 derivatives.
 *
 * \attention THIS FILE GETS AUTOMATICALLY GENERATED BY THE "genEvalSpecializations.py"
 *            SCRIPT. DO NOT EDIT IT MANUALLY!
 */
#ifndef OPM_DENSEAD_EVALUATION10_HPP
#define OPM_DENSEAD_EVALUATION10_HPP

namespace Opm {
namespace DenseAd {

template <class ValueT>
struct EvaluationOps<ValueT, 10>
{
private:
    typedef Evaluation<ValueT, 10 > Eval;

public:
    static inline void assign(Eval& a, const Eval& b)
    {

        a.data_[0] = b.data_[0];
        a.data_[1] = b.data_[1];
        a.data_[2] = b.data_[2];
        a.data_[3] = b.data_[3];
        a.data_[4] = b.data_[4];
        a.data_[5] = b.data_[5];
        a.data_[6] = b.data_[6];
        a.data_[7] = b.data_[7];
        a.data_[8] = b.data_[8];
        a.data_[9] = b.data_[9];
        a.data_[10] = b.data_[10];
    }

    static inline void assignNegative(Eval& a, const Eval& b)
    {

        a.data_[0] = - b.data_[0];
        a.data_[1] = - b.data_[1];
        a.data_[2] = - b.data_[2];
        a.data_[3] = - b.data_[3];
        a.data_[4] = - b.data_[4];
        a.data_[5] = - b.data_[5];
        a.data_[6] = - b.data_[6];
        a.data_[7] = - b.data_[7];
        a.data_[8] = - b.data_[8];
        a.data_[9] = - b.data_[9];
        a.data_[10] = - b.data_[10];
    }

    static inline void clearDerivatives(Eval& a)
    {

        a.data_[1] = 0.0;
        a.data_[2] = 0.0;
        a.data_[3] = 0.0;
        a.data_[4] = 0.0;
        a.data_[5] = 0.0;
        a.data_[6] = 0.0;
        a.data_[7] = 0.0;
        a.data_[8] = 0.0;
        a.data_[9] = 0.0;
        a.data_[10] = 0.0;
    }

    static inline Eval& addEq(Eval& a, const Eval& b)
    {

        a.data_[0] += b.data_[0];
        a.data_[1] += b.data_[1];
        a.data_[2] += b.data_[2];
        a.data_[3] += b.data_[3];
        a.data_[4] += b.data_[4];
        a.data_[5] += b.data_[5];
        a.data_[6] += b.data_[6];
        a.data_[7] += b.data_[7];
        a.data_[8] += b.data_[8];
        a.data_[9] += b.data_[9];
        a.data_[10] += b.data_[10];

        return a;
    }

    static inline Eval& subEq(Eval& a, const Eval& b)
    {

        a.data_[0] -= b.data_[0];
        a.data_[1] -= b.data_[1];
        a.data_[2] -= b.data_[2];
        a.data_[3] -= b.data_[3];
        a.data_[4] -= b.data_[4];
        a.data_[5] -= b.data_[5];
        a.data_[6] -= b.data_[6];
        a.data_[7] -= b.data_[7];
        a.data_[8] -= b.data_[8];
        a.data_[9] -= b.data_[9];
        a.data_[10] -= b.data_[10];

        return a;
    }

    static inline Eval& mulEq(Eval& a, const Eval& b)
    {
        // while the values are multiplied, the derivatives follow the product rule,
        // i.e., (u*v)' = (v'u + u'v).
        const ValueT u = a.value();
        const ValueT v = b.value();

        // value
        a.data_[0] *= v ;

        //  derivatives
        a.data_[1] = a.data_[1]*v + b.data_[1] * u;
        a.data_[2] = a.data_[2]*v + b.data_[2] * u;
        a.data_[3] = a.data_[3]*v + b.data_[3] * u;
        a.data_[4] = a.data_[4]*v + b.data_[4] * u;
        a.data_[5] = a.data_[5]*v + b.data_[5] * u;
        a.data_[6] = a.data_[6]*v + b.data_[6] * u;
        a.data_[7] = a.data_[7]*v + b.data_[7] * u;
        a.data_[8] = a.data_[8]*v + b.data_[8] * u;
        a.data_[9] = a.data_[9]*v + b.data_[9] * u;
        a.data_[10] = a.data_[10]*v + b.data_[10] * u;

        return a;
    }

    template <class RhsType>
    static inline Eval& scalarMulEq(Eval& a, const RhsType& other)
    {

        a.data_[0] *= other;
        a.data_[1] *= other;
        a.data_[2] *= other;
        a.data_[3] *= other;
        a.data_[4] *= other;
        a.data_[5] *= other;
        a.data_[6] *= other;
        a.data_[7] *= other;
        a.data_[8] *= other;
        a.data_[9] *= other;
        a.data_[10] *= other;

        return a;
    }

    static inline Eval& divEq(Eval& a, const Eval& b)
    {
        // values are divided, derivatives follow the rule for division, i.e., (u/v)' = (v'u - u'v)/v^2.
        const ValueT v_vv = 1.0 / b.value();
        const ValueT u_vv = a.value() * v_vv * v_vv;

        // value
        a.data_[0] *= v_vv;

        //  derivatives
        a.data_[1] = a.data_[1]*v_vv - b.data_[1]*u_vv;
        a.data_[2] = a.data_[2]*v_vv - b.data_[2]*u_vv;
        a.data_[3] = a.data_[3]*v_vv - b.data_[3]*u_vv;
        a.data_[4] = a.data_[4]*v_vv - b.data_[4]*u_vv;
        a.data_[5] = a.data_[5]*v_vv - b.data_[5]*u_vv;
        a.data_[6] = a.data_[6]*v_vv - b.data_[6]*u_vv;
        a.data_[7] = a.data_[7]*v_vv - b.data_[7]*u_vv;
        a.data_[8] = a.data_[8]*v_vv - b.data_[8]*u_vv;
        a.data_[9] = a.data_[9]*v_vv - b.data_[9]*u_vv;
        a.data_[10] = a.data_[10]*v_vv - b.data_[10]*u_vv;

        return a;
    }

    template <class RhsType>
    static inline Eval& scalarDivEq(Eval& a, const RhsType& other)
    {

        a.data_[0] /= other;
        a.data_[1] /= other;
        a.data_[2] /= other;
        a.data_[3] /= other;
        a.data_[4] /= other;
        a.data_[5] /= other;
        a.data_[6] /= other;
        a.data_[7] /= other;
        a.data_[8] /= other;
        a.data_[9] /= other;
        a.data_[10] /= other;

        return a;
    }

    template <class RhsValueType>
    static inline Eval divide(const RhsValueType& a, const Eval& b)
    {
        Eval result;
        result.setValue( a/b.value() );
        const ValueT df_dg = - result.value()/b.value();

        result.data_[1] = df_dg*b.data_[1];
        result.data_[2] = df_dg*b.data_[2];
        result.data_[3] = df_dg*b.data_[3];
        result.data_[4] = df_dg*b.data_[4];
        result.data_[5] = df_dg*b.data_[5];
        result.data_[6] = df_dg*b.data_[6];
        result.data_[7] = df_dg*b.data_[7];
        result.data_[8] = df_dg*b.data_[8];
        result.data_[9] = df_dg*b.data_[9];
        result.data_[10] = df_dg*b.data_[10];

        return result;
    }
};

} } // namespace DenseAd, Opm

#endif // OPM_DENSEAD_EVALUATION10_HPP