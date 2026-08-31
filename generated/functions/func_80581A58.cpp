#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80581A58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80581A58;

loc_80581A58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r7 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 & 258);
}

loc_80581A88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80581AA4;
    }
}

loc_80581A8C:
{
    r4 = 34340864;
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 + 24576);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80581AA4;
    }
}

loc_80581AA0:
{
    r6 = 0;
}

loc_80581AA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80581AA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581B04;
    }
}

loc_80581AAC:
{
    r8 = MemoryInline::FlatRead32((r7 + 4));
    r5 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 6660));
    r0 = 1;
    r7 = MemoryInline::FlatRead32((r8 + 12));
    r6 = 0x808B0000u;
    r4 = 31;
    r5 = 1;
    r7 = (r7 | 268435456);
    MemoryInline::FlatWrite32((r8 + 12), r7);
    MemoryInline::FlatWrite8((r3 + 400), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 23476));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 398), static_cast<uint16_t>(r0));
    r3 = r30;
    ctx->lr = 0x80581AE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    r4 = 21;
    // inline leaf 0x805917C0 (13 guest instruction(s))
}

loc_inl0_0x805917C0:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
}

loc_inl0_0x805917D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805917D4:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_inl0_cont_805917C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_805917C0:
{
    // end of inlined leaf 0x805917C0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80581AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581B04;
    }
}

loc_80581AFC:
{
    r3 = r30;
    // inline leaf 0x805918E0 (9 guest instruction(s))
}

loc_inl1_0x805918E0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x805918F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805918F4:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_inl1_cont_805918E0;
}

loc_inl1_return:
{
}

loc_inl1_cont_805918E0:
{
    // end of inlined leaf 0x805918E0
}

loc_80581B04:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80581A58 func_80581A58 preserves=true fpr_mask=0x00000000
