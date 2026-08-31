#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80750238(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80750238;

loc_80750238:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8075023C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750274;
    }
}

loc_80750240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80750244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750284;
    }
}

loc_80750248:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8075024C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750294;
    }
}

loc_80750250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_80750254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807502A4;
    }
}

loc_80750258:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8075025C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807502B4;
    }
}

loc_80750260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80750264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807502C4;
    }
}

loc_80750268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_8075026C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807502D4;
    }
}

loc_80750270:
{
    goto loc_807502E0;
}

loc_80750274:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 3;
    MemoryInline::FlatWrite32((r5 + 8), r0);
    goto loc_807502E0;
}

loc_80750284:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 4;
    MemoryInline::FlatWrite32((r5 + 8), r0);
    goto loc_807502E0;
}

loc_80750294:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 7;
    MemoryInline::FlatWrite32((r5 + 8), r0);
    goto loc_807502E0;
}

loc_807502A4:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 10;
    MemoryInline::FlatWrite32((r5 + 8), r0);
    goto loc_807502E0;
}

loc_807502B4:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 13;
    MemoryInline::FlatWrite32((r5 + 8), r0);
    goto loc_807502E0;
}

loc_807502C4:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 16;
    MemoryInline::FlatWrite32((r5 + 8), r0);
    goto loc_807502E0;
}

loc_807502D4:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 19;
    MemoryInline::FlatWrite32((r5 + 8), r0);
}

loc_807502E0:
{
    MemoryInline::FlatWrite32((r3 + 60), r4);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80750238 func_80750238 preserves=true fpr_mask=0x00000000
