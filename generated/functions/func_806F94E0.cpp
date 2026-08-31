#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F94E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F94E0;

loc_806F94E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 10320));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F9508:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F95C0;
    }
}

loc_806F950C:
{
    r4 = MemoryInline::FlatRead16((r3 + 38));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806F9514:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F9524;
    }
}

loc_806F9518:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r0));
    goto loc_806F95C0;
}

loc_806F9524:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F95C0;
    }
}

loc_806F9528:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F9530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F95B8;
    }
}

loc_806F9534:
{
    r3 = MemoryInline::FlatRead32(r3);
    r31 = 0;
}

loc_806F9540:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F9554;
    }
}

loc_806F9544:
{
    // inline leaf 0x8008E8B0 (8 guest instruction(s))
}

loc_inl0_0x8008E8B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r3 = 1;
}

loc_inl0_0x8008E8BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008E8C0:
{
}

loc_inl0_0x8008E8C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008E8C8:
{
    r3 = 0;
    goto loc_inl0_cont_8008E8B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8008E8B0:
{
    // end of inlined leaf 0x8008E8B0
}

loc_806F954C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F9554;
    }
}

loc_806F9550:
{
    r31 = 1;
}

loc_806F9554:
{
}

loc_806F9558:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_806F9578;
    }
}

loc_806F955C:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F9568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9578;
    }
}

loc_806F956C:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E520u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_806F9578:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806F9584:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F958C;
    }
}

loc_806F9588:
{
    // inline leaf 0x8008E310 (6 guest instruction(s))
}

loc_inl1_0x8008E310:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
}

loc_inl1_0x8008E318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8008E31C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 120), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8008E310;
}

loc_inl1_return:
{
}

loc_inl1_cont_8008E310:
{
    // end of inlined leaf 0x8008E310
}

loc_806F958C:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::FlatRead32((r4 + 9004));
    MemoryInline::FlatWrite32((r4 + 184), r3);
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F95A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F95B0;
    }
}

loc_806F95A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F95B4;
}

loc_806F95B0:
{
    r0 = -1;
}

loc_806F95B4:
{
    MemoryInline::FlatWrite32((r4 + 188), r0);
}

loc_806F95B8:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r30 + 38), static_cast<uint16_t>(r0));
}

loc_806F95C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FF gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F94E0 func_806F94E0 preserves=true fpr_mask=0x00000000
