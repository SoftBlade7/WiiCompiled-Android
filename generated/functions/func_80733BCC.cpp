#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80733BCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80733BCC;

loc_80733BCC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r4 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = 16;
    r5 = MemoryInline::FlatRead32((r4 + 20));
    r4 = 0;
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 200));
}

loc_80733C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80733C20;
    }
}

loc_80733C10:
{
    r0 = MemoryInline::FlatRead8((r5 + 520));
}

loc_80733C18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80733C20;
    }
}

loc_80733C1C:
{
    r4 = 1;
}

loc_80733C20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80733C24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733C30;
    }
}

loc_80733C28:
{
    r3 = MemoryInline::FlatRead32((r5 + 200));
    goto loc_80733C50;
}

loc_80733C30:
{
    r0 = MemoryInline::FlatRead32((r5 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_80733C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733C50;
    }
}

loc_80733C3C:
{
    r0 = (r0 * 28);
    r3 = 0x809C0000u;
    r3 = (r3 + 13984);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80733C50:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80733BCC func_80733BCC preserves=true fpr_mask=0x00000000
