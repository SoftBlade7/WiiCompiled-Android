#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CD4C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806CD4C0;

loc_806CD4C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r3 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CD4E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CD6C4;
    }
}

loc_806CD4E8:
{
    r8 = MemoryInline::FlatRead8((r3 + 208));
    r9 = 1;
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_806CD4F8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_806CD624;
    }
}

loc_806CD4FC:
{
}

loc_806CD500:
{
    r6 = (r8 + -8);
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_806CD5F0;
    }
}

loc_806CD508:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_806CD524;
    }
}

loc_806CD510:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_806CD51C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r0))) {
        goto loc_806CD524;
    }
}

loc_806CD520:
{
    r7 = 1;
}

loc_806CD524:
{
}

loc_806CD528:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_806CD5F0;
    }
}

loc_806CD52C:
{
    r0 = (r6 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_806CD53C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_806CD5F0;
    }
}

loc_806CD540:
{
    r0 = MemoryInline::FlatRead32((r3 + 380));
    r4_addr_2 = (r4 + r0);
    r5 = MemoryInline::FlatRead8(r4_addr_2);
    r12 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r12 + 1));
    r4 = (r4 + 8);
    r6 = (r9 & r5);
    r9 = MemoryInline::FlatRead8((r12 + 2));
    r5 = (0 - r6);
    r8 = MemoryInline::FlatRead8((r12 + 3));
    r5 = (r5 | r6);
    r7 = MemoryInline::FlatRead8((r12 + 4));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r6 = MemoryInline::FlatRead8((r12 + 5));
    r11 = (r5 & r0);
    r5 = MemoryInline::FlatRead8((r12 + 6));
    r10 = (0 - r11);
    r0 = MemoryInline::FlatRead8((r12 + 7));
    r10 = (r10 | r11);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    r10 = (r10 & r9);
    r9 = (0 - r10);
    r9 = (r9 | r10);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r9 = (r9 & r8);
    r8 = (0 - r9);
    r8 = (r8 | r9);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r8 = (r8 & r7);
    r7 = (0 - r8);
    r7 = (r7 | r8);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r7 = (r7 & r6);
    r6 = (0 - r7);
    r6 = (r6 | r7);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r6 = (r6 & r5);
    r5 = (0 - r6);
    r5 = (r5 | r6);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r5 = (r5 & r0);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806CD540;
    }
}

loc_806CD5F0:
{
    r5 = MemoryInline::FlatRead8((r3 + 208));
    r0 = (r5 - r4);
    ctr = r0;
}

loc_806CD600:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_806CD624;
    }
}

loc_806CD604:
{
    r5 = MemoryInline::FlatRead32((r3 + 380));
    r5_addr_2 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    r4 = (r4 + 1);
    r5 = (r9 & r0);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_6 & 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806CD604;
    }
}

loc_806CD624:
{
}

loc_806CD628:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_806CD634;
    }
}

loc_806CD62C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 388), static_cast<uint8_t>(r0));
}

loc_806CD634:
{
    r29 = 0;
    r30 = 0;
    goto loc_806CD6B8;
}

loc_806CD640:
{
    r3 = MemoryInline::FlatRead32((r31 + 380));
    r3_addr_2 = (r3 + r29);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CD64C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CD664;
    }
}

loc_806CD650:
{
    r3 = MemoryInline::FlatRead32((r31 + 228));
    r4 = (r29 & 255);
    ctx->lr = 0x806CD65Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F4840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r31 + 380));
    r4_addr_6 = (r4 + r29);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r3));
}

loc_806CD664:
{
    r3 = MemoryInline::FlatRead32((r31 + 380));
    r4 = 0;
    r3_addr_3 = (r3 + r29);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_806CD674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CD68C;
    }
}

loc_806CD678:
{
    r3 = MemoryInline::FlatRead32((r31 + 384));
    r3_addr_4 = (r3 + r29);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_806CD684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CD68C;
    }
}

loc_806CD688:
{
    r4 = 1;
}

loc_806CD68C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CD690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CD6A0;
    }
}

loc_806CD694:
{
    r3 = MemoryInline::FlatRead32((r31 + 224));
    r3_addr_6 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctx->lr = 0x806CD6A0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806C7674u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806CD6A0:
{
    r4 = MemoryInline::FlatRead32((r31 + 380));
    r30 = (r30 + 4);
    r3 = MemoryInline::FlatRead32((r31 + 384));
    r4_addr_8 = (r4 + r29);
    r0 = MemoryInline::FlatRead8(r4_addr_8);
    r3_addr_8 = (r3 + r29);
    MemoryInline::FlatWrite8(r3_addr_8, static_cast<uint8_t>(r0));
    r29 = (r29 + 1);
}

loc_806CD6B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_806CD6C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CD640;
    }
}

loc_806CD6C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CD4C0 func_806CD4C0 preserves=true fpr_mask=0x00000000
