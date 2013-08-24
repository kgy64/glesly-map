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

MapRender::MapRender(Glesly::Render3D::RenderInfo & renderInfo, int width, int height):
    Render3D(renderInfo, width, height)
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
