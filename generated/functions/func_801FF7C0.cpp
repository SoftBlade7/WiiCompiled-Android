#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FF7C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FF7C0;

loc_801FF7C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = 0;
    r28 = r5;
    MemoryInline::FlatWrite32(r7, r0);
    r27 = r3;
    r31 = r4;
    r29 = r6;
    r5 = MemoryInline::FlatRead16((r4 + 44));
    r30 = r7;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FF7F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF804;
    }
}

loc_801FF7FC:
{
    r3 = 0;
    goto loc_801FFA04;
}

loc_801FF804:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 - r5);
}

loc_801FF810:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r0))) {
        goto loc_801FF818;
    }
}

loc_801FF814:
{
    r29 = r0;
}

loc_801FF818:
{
    r5 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FF824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF90C;
    }
}

loc_801FF828:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r6 = (r31 + 36);
    r4 = MemoryInline::FlatRead32((r4 + 40));
    r5 = 0;
    r3 = (r3 + 4);
    ctx->lr = 0x801FF840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC29Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FF844:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FF84C;
    }
}

loc_801FF848:
{
    goto loc_801FFA04;
}

loc_801FF84C:
{
    r5 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FF858:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF90C;
    }
}

loc_801FF85C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801FF864:
{
    r8 = MemoryInline::FlatRead32((r3 + 608));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801FF874;
    }
}

loc_801FF86C:
{
    r4 = 0;
    goto loc_801FF878;
}

loc_801FF874:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF878:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r7 = (r0 & r3);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r8 & r3);
    r6 = (0 - r7);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_801FF8BC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FF8C8;
    }
}

loc_801FF8C0:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_801FF8C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FF8CC:
{
    MemoryInline::FlatWrite32((r31 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF8DC;
    }
}

loc_801FF8D4:
{
    r4 = 0;
    goto loc_801FF8E4;
}

loc_801FF8DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF8E4:
{
    r5 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 28;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    goto loc_801FFA04;
}

loc_801FF90C:
{
    r6 = MemoryInline::FlatRead16((r31 + 44));
    r3 = r27;
    r4 = r28;
    r7 = r29;
    r8 = (r1 + 8);
    r9 = 0;
    r10 = 1;
    ctx->lr = 0x801FF92Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802053D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FF930:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FF944;
    }
}

loc_801FF934:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FF93C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF944;
    }
}

loc_801FF940:
{
    goto loc_801FFA04;
}

loc_801FF944:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801FF94C:
{
    MemoryInline::FlatWrite32(r30, r0);
    r6 = MemoryInline::FlatRead32((r31 + 36));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801FF964;
    }
}

loc_801FF95C:
{
    r4 = 0;
    goto loc_801FF96C;
}

loc_801FF964:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF96C:
{
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r3 = MemoryInline::FlatRead16(r4);
    r7 = (r0 + r5);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    r0 = (r0 & r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
    r4 = (r6 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FF998;
    }
}

loc_801FF990:
{
    MemoryInline::FlatWrite32((r31 + 36), r4);
    goto loc_801FF9A0;
}

loc_801FF998:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_801FF9A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r5 = (r0 + r5);
    MemoryInline::FlatWrite32((r31 + 32), r5);
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_801FF9B8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_801FF9C0;
    }
}

loc_801FF9BC:
{
    MemoryInline::FlatWrite32((r3 + 608), r5);
}

loc_801FF9C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FF9C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF9D0;
    }
}

loc_801FF9C8:
{
    r5 = 0;
    goto loc_801FF9D8;
}

loc_801FF9D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF9D8:
{
    r6 = MemoryInline::FlatRead32((r31 + 32));
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r5 = MemoryInline::FlatRead16(r5);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F62D4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = 0;
}

loc_801FFA04:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FF7C0 func_801FF7C0 preserves=true fpr_mask=0x00000000
