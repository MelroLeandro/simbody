/* Portions copyright (c) 2005-6 Stanford University and Michael Sherman.
 * Contributors:
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, 
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included 
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**@file
 * Implementations of non-inline methods of MassProperties classes.
 */

#include "SimTKcommon/internal/common.h"
#include "SimTKcommon/Simmatrix.h"

#include <iostream>

namespace SimTK {

std::ostream& operator<<(std::ostream& o, const Inertia& i) {
    return o << i.toMat33();
}

std::ostream& operator<<(std::ostream& o, const MassProperties& mp) {
    return o << "{ mass=" << mp.getMass() 
             << "\n  com=" << mp.getMassCenter()
             << "\n  Ixx,yy,zz=" << mp.getInertia().getMoments()
             << "\n  Ixy,xz,yz=" << mp.getInertia().getProducts()
             << "\n}\n";
}


} // namespace SimTK

