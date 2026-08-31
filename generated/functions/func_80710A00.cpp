#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80632080_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80710A00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80710A00;

loc_80710A00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2920));
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = MemoryInline::FlatRead32((r4 + 8984));
    ctx->lr = 0x80710A3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F6AD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10224));
    ctx->lr = 0x80710A48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8070FC98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    // inline leaf 0x806FBC90 (13 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r6 = 0x809C0000u;
    r4 = 0x808A0000u;
    r5 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 10232));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4960));
    r4 = MemoryInline::FlatRead8((r6 + 76));
    MemoryInline::FlatWriteRam8((r5 + 9033), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 380), f0.d);
    MemoryInline::FlatWrite32((r3 + 384), r0);
    MemoryInline::FlatWrite32((r3 + 388), r0);
    // end of inlined leaf 0x806FBC90
    r3 = 0x809C0000u;
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 7932));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 7824));
    // inline leaf 0x807181F4 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 212u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 36), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 64), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 96), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 124), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 156), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 184), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r3 + 216), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 208u, (r3 + 244), f2.d);
    // end of inlined leaf 0x807181F4
    r5 = MemoryInline::FlatRead8((r31 + 76));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r4 + 9904), r0);
    MemoryInline::FlatWriteRam8((r3 + 9908), static_cast<uint8_t>(r5));
    // inline leaf 0x80713DCC (7 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + -68);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80713DCC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80710A94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80710B8C;
    }
}

loc_80710A98:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 61), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 62), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 63), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 10220));
    ctx->lr = 0x80710AB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8070F308u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 76));
    r4 = MemoryInline::FlatRead32((r3 + 10392));
    r30 = 0x809C0000u;
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r4 + 2120), r0);
    r5 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = MemoryInline::FlatRead8((r31 + 76));
    r0 = MemoryInline::FlatRead8((r5 + 36));
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 8992));
    ctx->lr = 0x80710AE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F8188u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r29 = 0;
    r28 = 0;
    goto loc_80710B14;
}

loc_80710AF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = (r28 & 255);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80590650
}

loc_80710B08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80710B10;
    }
}

loc_80710B0C:
{
    r29 = (r29 + 1);
}

loc_80710B10:
{
    r28 = (r28 + 1);
}

loc_80710B14:
{
    r0 = MemoryInline::FlatRead8((r31 + 77));
    r3 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80710B20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80710AF4;
    }
}

loc_80710B24:
{
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWrite8((r31 + 78), static_cast<uint8_t>(r29));
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r31 + 80), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    MemoryInline::FlatWrite32((r31 + 68), r0);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2932));
    MemoryInline::FlatWrite32((r31 + 72), r0);
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80632080u) && KnownTranslatedCpuCall<0x80632080u>::kAvailable && !KnownTranslatedCpuCall<0x80632080u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80632080u>()) {
        const auto state_free_result_80632080_272E = func_80632080_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80632080_272E[0]);
        cr = static_cast<uint32_t>(state_free_result_80632080_272E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80632080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->lr = 0x80710B70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80711AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = (r31 + 48);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80535CA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    ctx->lr = 0x80710B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x808683E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80710B8C:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80710A00 func_80710A00 preserves=true fpr_mask=0x00000000
