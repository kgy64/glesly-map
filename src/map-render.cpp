/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My render class for map mesh rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <glesly/shader-names.h>
#include <my-mesh-vertex.h>
#include <my-mesh-fragment.h>
#include <glesly/shader.h>

#include "map-render.h"

using namespace Glesly;

MapRender::MapRender(int width, int height):
    myT1Matrix(*this, "t0_matrix", myTransform[0]),
    myT2Matrix(*this, "t1_matrix", myTransform[1]),
    myT3Matrix(*this, "t2_matrix", myTransform[2]),
    myT4Matrix(*this, "t3_matrix", myTransform[3])
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 USE_VERTEX_SHADER(my_mesh_vertex);
 USE_FRAGMENT_SHADER(my_mesh_fragment);
}

MapRender::~MapRender()
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
