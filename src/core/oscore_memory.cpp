/** 
 * Memory module
 * 
 * @author    Sergey Baigudin <baigudin@mail.ru>
 * @copyright 2014-2015 Sergey Baigudin
 * @license   http://baigudin.com/license/
 * @link      http://baigudin.com
 */
#include "oscore_memory.h"

namespace oscore
{
  /**
   * Allocate of memory
   *
   * @param uint32 size Size in byte
   * @return void* Allocated memory address or NULL, if error
   */  
  void* Memory::alloc(uint32 size)
  {
    return Object::memAlloc(size);
  }

  /**
   * Free allocated memory
   *
   * @param void* prt Address of allocated memory
   * @return int32 Error code or zero
   */  
  int32 Memory::free(void* prt)
  {
    return Object::memFree(prt);  
  }
}
