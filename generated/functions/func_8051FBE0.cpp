#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051FBE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051FBE0;

loc_8051FBE0:
{
    r3 = MemoryInline::FlatRead16((r5 + 6));
    r6 = 0;
    r0 = (r3 & 2304);
}

loc_8051FBEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FBF4;
    }
}

loc_8051FBF0:
{
    r6 = (r6 | 1);
}

loc_8051FBF4:
{
    r0 = (r3 & 1536);
}

loc_8051FBF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC04;
    }
}

loc_8051FBFC:
{
    r0 = (r6 | 2);
    r6 = (r0 & 65535);
}

loc_8051FC04:
{
    r0 = (r3 & 16);
}

loc_8051FC08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC14;
    }
}

loc_8051FC0C:
{
    r0 = (r6 | 4);
    r6 = (r0 & 65535);
}

loc_8051FC14:
{
    r0 = (r3 & 2);
}

loc_8051FC18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC24;
    }
}

loc_8051FC1C:
{
    r0 = (r6 | 8);
    r6 = (r0 & 65535);
}

loc_8051FC24:
{
    r0 = (r3 & 1);
}

loc_8051FC28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC34;
    }
}

loc_8051FC2C:
{
    r0 = (r6 | 16);
    r6 = (r0 & 65535);
}

loc_8051FC34:
{
    r0 = (r3 & 8);
}

loc_8051FC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC44;
    }
}

loc_8051FC3C:
{
    r0 = (r6 | 32);
    r6 = (r0 & 65535);
}

loc_8051FC44:
{
    r0 = (r3 & 4);
}

loc_8051FC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC54;
    }
}

loc_8051FC4C:
{
    r0 = (r6 | 64);
    r6 = (r0 & 65535);
}

loc_8051FC54:
{
    r0 = (r3 & 32768);
}

loc_8051FC58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FC64;
    }
}

loc_8051FC5C:
{
    r0 = (r6 | 128);
    r6 = (r0 & 65535);
}

loc_8051FC64:
{
    r0 = (r3 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051FC68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FC74;
    }
}

loc_8051FC6C:
{
    r0 = (r6 | 256);
    r6 = (r0 & 65535);
}

loc_8051FC74:
{
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r5 + 6));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051FBE0 func_8051FBE0 preserves=true fpr_mask=0x00000000
