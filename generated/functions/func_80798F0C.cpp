#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798F0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798F0C;

loc_80798F0C:
{
    r0 = MemoryInline::FlatRead32((r3 + 140));
    r6 = 0;
}

loc_80798F18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80798F3C;
    }
}

loc_80798F1C:
{
    r0 = (r0 * 28);
    r5 = 0x809C0000u;
    r5 = (r5 + 13984);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80798F34:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80798F3C;
    }
}

loc_80798F38:
{
    r6 = MemoryInline::FlatRead32((r3 + 144));
}

loc_80798F3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798F44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798F7C;
    }
}

loc_80798F48:
{
    r0 = MemoryInline::FlatRead8((r3 + 130));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798F50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798F7C;
    }
}

loc_80798F54:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
    r3 = 0x809C0000u;
    r3 = (r3 + 13984);
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80798F70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798F7C;
    }
}

loc_80798F74:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r6 = (r6 + r0);
}

loc_80798F7C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80798F0C func_80798F0C preserves=true fpr_mask=0x00000000
