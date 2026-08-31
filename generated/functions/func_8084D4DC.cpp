#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631C68_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8084D4DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8084D4DC;

loc_8084D4DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead32((r4 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-100));
}

loc_8084D508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084D528;
    }
}

loc_8084D50C:
{
}

loc_8084D510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084D558;
    }
}

loc_8084D514:
{
}

loc_8084D518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8084D5E8;
    }
}

loc_8084D51C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8084D520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084D688;
    }
}

loc_8084D524:
{
    goto loc_8084D6DC;
}

loc_8084D528:
{
    r5 = r31;
    r4 = 97;
    ctx->lr = 0x8084D534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80837934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r3 = 65;
    r29 = MemoryInline::FlatRead32((r4 + 9000));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631C68u) && KnownTranslatedCpuCall<0x80631C68u>::kAvailable && !KnownTranslatedCpuCall<0x80631C68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C68u>()) {
        const auto state_free_result_80631C68_D29 = func_80631C68_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C68_D29[0]);
        cr = static_cast<uint32_t>(state_free_result_80631C68_D29[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80631C68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r29;
    r5 = 0;
    ctx->lr = 0x8084D554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F8DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8084D6DC;
}

loc_8084D558:
{
    r28 = 0;
    r29 = 0x809C0000u;
}

loc_8084D560:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r5 = (r28 & 255);
    r6 = (r3 & 255);
    r0 = (r5 * 240);
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r4 = (r5 - r6);
    r28 = (r28 + 1);
    r5 = (r5 | ~r6);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_4 & 2147483647);
    r4 = (r5 - r4);
    r3 = (r3 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(12));
}

loc_8084D594:
{
    MemoryInline::FlatWrite32((r3 + 3112), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084D560;
    }
}

loc_8084D59C:
{
    r8 = 0x809C0000u;
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r8 + -10456));
    r7 = 2;
    r0 = 5;
    r3 = r30;
    MemoryInline::FlatWrite32((r4 + 5984), r5);
    r5 = r31;
    r4 = 114;
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    MemoryInline::FlatWrite32((r6 + 5980), r7);
    r7 = MemoryInline::FlatRead32((r8 + -10456));
    r6 = MemoryInline::FlatRead32((r7 + 6016));
    r6 = (r6 & -2);
    MemoryInline::FlatWrite32((r7 + 6016), r6);
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    MemoryInline::FlatWrite32((r6 + 5988), r0);
    ctx->lr = 0x8084D5E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8084D6DC;
}

loc_8084D5E8:
{
    r28 = 0;
    r29 = 0x809C0000u;
}

loc_8084D5F0:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r5 = (r28 & 255);
    r6 = (r3 & 255);
    r0 = (r5 * 240);
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r4 = (r5 - r6);
    r28 = (r28 + 1);
    r5 = (r5 | ~r6);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_2 & 2147483647);
    r4 = (r5 - r4);
    r3 = (r3 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(12));
}

loc_8084D624:
{
    MemoryInline::FlatWrite32((r3 + 3112), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084D5F0;
    }
}

loc_8084D62C:
{
    r8 = 0x809C0000u;
    r5 = 3;
    r4 = MemoryInline::FlatRead32((r8 + -10456));
    r7 = 0;
    r0 = 5;
    r3 = r30;
    MemoryInline::FlatWrite32((r4 + 5984), r5);
    r5 = r31;
    r4 = 117;
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    MemoryInline::FlatWrite32((r6 + 5980), r7);
    r7 = MemoryInline::FlatRead32((r8 + -10456));
    r6 = MemoryInline::FlatRead32((r7 + 6016));
    r6 = (r6 & -2);
    MemoryInline::FlatWrite32((r7 + 6016), r6);
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    MemoryInline::FlatWrite32((r6 + 5988), r0);
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    r0 = MemoryInline::FlatRead32((r6 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r6 + 6016), r0);
    ctx->lr = 0x8084D684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8084D6DC;
}

loc_8084D688:
{
    r8 = 0x809C0000u;
    r6 = 4;
    r4 = MemoryInline::FlatRead32((r8 + -10456));
    r7 = 1;
    r0 = 5;
    r5 = r31;
    MemoryInline::FlatWrite32((r4 + 5984), r6);
    r4 = 97;
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    MemoryInline::FlatWrite32((r6 + 5980), r7);
    r7 = MemoryInline::FlatRead32((r8 + -10456));
    r6 = MemoryInline::FlatRead32((r7 + 6016));
    r6 = (r6 & -2);
    MemoryInline::FlatWrite32((r7 + 6016), r6);
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    MemoryInline::FlatWrite32((r6 + 5988), r0);
    r6 = MemoryInline::FlatRead32((r8 + -10456));
    r0 = MemoryInline::FlatRead32((r6 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r6 + 6016), r0);
    ctx->lr = 0x8084D6DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8084D6DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084D4DC func_8084D4DC preserves=true fpr_mask=0x00000000
