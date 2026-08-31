#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019C0D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019C0D8;

loc_8019C0D8:
{
    r0 = (r4 & 1);
}

loc_8019C0DC:
{
    r7 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C0E8;
    }
}

loc_8019C0E4:
{
    r7 = (r7 | 16);
}

loc_8019C0E8:
{
    r0 = (r4 & 2);
}

loc_8019C0EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C0F4;
    }
}

loc_8019C0F0:
{
    r7 = (r7 | 32);
}

loc_8019C0F4:
{
    r0 = (r5 & 1);
}

loc_8019C0F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C100;
    }
}

loc_8019C0FC:
{
    r7 = (r7 | 4);
}

loc_8019C100:
{
    r0 = (r5 & 2);
}

loc_8019C104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C10C;
    }
}

loc_8019C108:
{
    r7 = (r7 | 8);
}

loc_8019C10C:
{
    r0 = (r6 & 1);
}

loc_8019C110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C118;
    }
}

loc_8019C114:
{
    r7 = (r7 | 1);
}

loc_8019C118:
{
    r0 = (r6 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019C11C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019C124;
    }
}

loc_8019C120:
{
    r7 = (r7 | 2);
}

loc_8019C124:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019C0D8 func_8019C0D8 preserves=true fpr_mask=0x00000000
