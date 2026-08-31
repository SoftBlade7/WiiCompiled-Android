#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80616328(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80616328;

loc_80616328:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r8 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80616338:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r28 = r6;
    r7 = MemoryInline::FlatRead32((r8 + 7736));
    r6 = MemoryInline::FlatRead32((r7 + 152));
    MemoryInline::FlatWrite32((r6 + 964), r4);
    r4 = MemoryInline::FlatRead32((r8 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 972), r5);
    r4 = MemoryInline::FlatRead32((r8 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 7032));
    r3 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r3 + 968), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80616414;
    }
}

loc_80616388:
{
    r3 = MemoryInline::FlatRead32((r8 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 696));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80616398:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806163A4;
    }
}

loc_8061639C:
{
    r29 = 0;
    goto loc_806163F8;
}

loc_806163A4:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7516);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806163F4;
    }
}

loc_806163B0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806163C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806163DC;
}

loc_806163C8:
{
}

loc_806163CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806163D8;
    }
}

loc_806163D0:
{
    r0 = 1;
    goto loc_806163E8;
}

loc_806163D8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806163DC:
{
}

loc_806163E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806163C8;
    }
}

loc_806163E4:
{
    r0 = 0;
}

loc_806163E8:
{
}

loc_806163EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806163F4;
    }
}

loc_806163F0:
{
    goto loc_806163F8;
}

loc_806163F4:
{
    r29 = 0;
}

loc_806163F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 6036));
    r4 = r28;
    r3 = (r3 + 372);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
    r4 = r3;
    r3 = r29;
    // inline leaf 0x8060DD94 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 10352), r4);
    // end of inlined leaf 0x8060DD94
}

loc_80616414:
{
    f1.d = f31.d;
    r0 = 172;
    MemoryInline::FlatWrite32((r31 + 7024), r0);
    r3 = r31;
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl2_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl2_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80602494;
    }
}

loc_inl2_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl2_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80602488:
{
    // end of inlined leaf 0x80602488
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 7205), static_cast<uint8_t>(r0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80616328 func_80616328 preserves=false fpr_mask=0x80000000
