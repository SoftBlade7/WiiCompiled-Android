#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066F2C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066F2C4;

loc_8066F2C4:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-608 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-608) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    r5 = (r5 + 11400);
    MemoryInline::FlatWriteRam32((r12 + -24), r26);
    MemoryInline::FlatWriteRam32((r12 + -20), r27);
    MemoryInline::FlatWriteRam32((r12 + -16), r28);
    MemoryInline::FlatWriteRam32((r12 + -12), r29);
    MemoryInline::FlatWriteRam32((r12 + -8), r30);
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    r27 = 65536;
    r0 = (r27 + -27664);
    r29 = 0x809C0000u;
    r28 = r3;
    r26 = r4;
    r0 = (r4 * r0);
    r3 = (r1 + 104);
    r6 = MemoryInline::FlatRead32((r29 + -10424));
    MemoryInline::FlatWriteRam32((r1 + 96), r5);
    r5 = 448;
    r4 = (r6 + r0);
    r31 = (r4 + 56);
    r4 = 0;
    ctx->lr = 0x8066F320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r27 + -27664);
    r3 = MemoryInline::FlatRead32((r29 + -10424));
    r0 = (r26 * r0);
    r29 = 0;
    r27 = 0x80380000u;
    r3 = (r3 + r0);
    r3 = (r3 + 23040);
    r30 = (r3 + 13448);
}

loc_8066F340:
{
    r0 = (r29 & 65535);
    r3 = (r1 + 96);
    r0 = (r0 * 448);
    r4 = (r31 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8066F358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066F35C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066F470;
    }
}

loc_8066F360:
{
    r0 = MemoryInline::FlatRead16((r1 + 120));
    r3 = (r31 + 22984);
    r3 = (r3 + 13448);
    r4 = (r0 & 1);
}

loc_8066F370:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8066F37C;
    }
}

loc_8066F374:
{
    r0 = 0;
    goto loc_8066F390;
}

loc_8066F37C:
{
    r0 = (r0 & 2);
}

loc_8066F380:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066F38C;
    }
}

loc_8066F384:
{
    r0 = 1;
    goto loc_8066F390;
}

loc_8066F38C:
{
    r0 = 2;
}

loc_8066F390:
{
}

loc_8066F394:
{
    r26 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066F3B8;
    }
}

loc_8066F39C:
{
    r0 = MemoryInline::FlatRead8((r1 + 206));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl0_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_2 & 3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_2 & 2097151);
}

loc_inl0_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl0_0x800EB88C;
    }
}

loc_inl0_0x800EB884:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_3 & 1);
    goto loc_inl0_cont_800EB870;
}

loc_inl0_0x800EB88C:
{
    r3 = 0;
}

loc_inl0_cont_800EB870:
{
    // end of inlined leaf 0x800EB870
}

loc_8066F3B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066F3B8;
    }
}

loc_8066F3B4:
{
    r26 = 1;
}

loc_8066F3B8:
{
}

loc_8066F3BC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8066F470;
    }
}

loc_8066F3C0:
{
    r0 = MemoryInline::FlatRead8((r1 + 206));
    r3 = MemoryInline::FlatRead8((r1 + 207));
    r0 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r1 + 112));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r7 = MemoryInline::FlatRead32((r1 + 116));
    r3 = MemoryInline::FlatRead32((r27 + 24576));
    r5 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r7);
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    // inline leaf 0x8000B2E0 (10 guest instruction(s))
}

loc_inl1_0x8000B2E0:
{
    r0 = (r4 + -65);
    r3 = 1380777984;
    r0 = (r0 & 255);
}

loc_inl1_0x8000B2F0:
{
    r3 = (r3 + 17232);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8000B2F8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r3 + 1380777984);
    r3 = (r3 + 17152);
    goto loc_inl1_cont_8000B2E0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8000B2E0:
{
    // end of inlined leaf 0x8000B2E0
    r0 = MemoryInline::FlatRead32((r1 + 64));
    r4 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r0 = (r4 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F470;
    }
}

loc_8066F408:
{
    r3 = (r1 + 64);
    r4 = (r1 + 32);
    ctx->lr = 0x8066F414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E75ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F454;
    }
}

loc_8066F41C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r26 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl2_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl2_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl2_0x8023320C;
    }
}

loc_inl2_0x80233204:
{
}

loc_inl2_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl2_0x80233214;
    }
}

loc_inl2_0x8023320C:
{
    r3 = 1;
    goto loc_inl2_cont_802331F8;
}

loc_inl2_0x80233214:
{
    r3 = 0;
}

loc_inl2_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F42C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F434;
    }
}

loc_8066F430:
{
    goto loc_8066F458;
}

loc_8066F434:
{
    r3 = (r1 + 64);
    ctx->lr = 0x8066F43Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E7508u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F440:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F448;
    }
}

loc_8066F444:
{
    goto loc_8066F454;
}

loc_8066F448:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r26 = r3;
    goto loc_8066F458;
}

loc_8066F454:
{
    r26 = 0;
}

loc_8066F458:
{
    r3 = r26;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl3_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl3_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl3_0x8023320C;
    }
}

loc_inl3_0x80233204:
{
}

loc_inl3_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl3_0x80233214;
    }
}

loc_inl3_0x8023320C:
{
    r3 = 1;
    goto loc_inl3_cont_802331F8;
}

loc_inl3_0x80233214:
{
    r3 = 0;
}

loc_inl3_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F470;
    }
}

loc_8066F468:
{
    r3 = r26;
    goto loc_8066F494;
}

loc_8066F470:
{
    r0 = MemoryInline::FlatRead8((r28 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F484;
    }
}

loc_8066F47C:
{
    r3 = 0;
    goto loc_8066F494;
}

loc_8066F484:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(30));
}

loc_8066F48C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066F340;
    }
}

loc_8066F490:
{
    r3 = 0;
}

loc_8066F494:
{
    r10 = MemoryInline::FlatRead32(r1);
    r26 = MemoryInline::FlatRead32((r10 + -24));
    r27 = MemoryInline::FlatRead32((r10 + -20));
    r28 = MemoryInline::FlatRead32((r10 + -16));
    r29 = MemoryInline::FlatRead32((r10 + -12));
    r30 = MemoryInline::FlatRead32((r10 + -8));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    r0 = MemoryInline::FlatRead32((r10 + 4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066F2C4 func_8066F2C4 preserves=true fpr_mask=0x00000000
