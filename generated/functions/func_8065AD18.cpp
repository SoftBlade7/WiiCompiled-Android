#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80662C58_statefree(uint32_t);

extern "C" void func_8065AD18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065AD18;

loc_8065AD18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065AD40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AE50;
    }
}

loc_8065AD44:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065AD54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AE50;
    }
}

loc_8065AD58:
{
    r3 = r28;
    ctx->lr = 0x8065AD60u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8065B048u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 56);
    r29 = 0;
    r31 = 1;
}

loc_8065AD6C:
{
    r5 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = (r29 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065ADDC;
    }
}

loc_8065AD90:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_8065AD98:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_8065ADDC;
    }
}

loc_8065AD9C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10152));
    r0 = (r0 * 48);
    r0 = (r5 + r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8065ADC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065ADDC;
    }
}

loc_8065ADCC:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r28;
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8065ADDC:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_8065ADE8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(12))) {
        goto loc_8065AD6C;
    }
}

loc_8065ADEC:
{
    r3 = 0x809C0000u;
    r28 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r28 + 8456));
    r4 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = MemoryInline::FlatRead32((r3 + 2528));
    r4 = (r4 * 88);
    r6 = (r6 + r4);
    r4 = MemoryInline::FlatRead8((r6 + 89));
    r6 = MemoryInline::FlatRead32((r6 + 72));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r6 = (r6 & ~r4);
    r0 = (r6 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8065AE28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AE50;
    }
}

loc_8065AE2C:
{
    // inline leaf 0x80662D20 (24 guest instruction(s))
}

loc_inl1_0x80662D20:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x80662D28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80662D34;
    }
}

loc_inl1_0x80662D2C:
{
    r3 = 0;
    goto loc_inl1_cont_80662D20;
}

loc_inl1_0x80662D34:
{
    r5 = 0x809C0000u;
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r5 + 8408));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
    r5 = MemoryInline::FlatRead32((r5 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r5 = (r5 & ~r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80662D78;
    }
}

loc_inl1_0x80662D60:
{
    r0 = MemoryInline::FlatRead32((r3 + 2532));
    r0 = (r5 & r0);
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    goto loc_inl1_cont_80662D20;
}

loc_inl1_0x80662D78:
{
    r3 = 0;
}

loc_inl1_cont_80662D20:
{
    // end of inlined leaf 0x80662D20
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065AE34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AE50;
    }
}

loc_8065AE38:
{
    r3 = MemoryInline::FlatRead32((r28 + 8456));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80662C58u) && KnownTranslatedCpuCall<0x80662C58u>::kAvailable && !KnownTranslatedCpuCall<0x80662C58u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80662C58u>()) {
        const auto state_free_result_80662C58_1F13 = func_80662C58_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_80662C58_1F13[0]);
        r3 = static_cast<uint32_t>(state_free_result_80662C58_1F13[1]);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80662C58u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065AE44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AE50;
    }
}

loc_8065AE48:
{
    r3 = MemoryInline::FlatRead32((r28 + 8456));
    ctx->lr = 0x8065AE50u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80662BECu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8065AE50:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065AD18 func_8065AD18 preserves=true fpr_mask=0x00000000
