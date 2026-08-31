#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065FA4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065FA4C;

loc_8065FA4C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    ctx->lr = 0x8065FA74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_8065FA78:
{
    r9 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8065FB0C;
    }
}

loc_8065FA80:
{
}

loc_8065FA84:
{
    r3 = (r29 + -8);
    if ((static_cast<uint32_t>(r29) <= static_cast<uint32_t>(8))) {
        goto loc_8065FAE8;
    }
}

loc_8065FA8C:
{
    r0 = (r3 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8065FA9C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8065FAE8;
    }
}

loc_8065FAA0:
{
    r31_addr_2 = (r31 + r9);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r9));
    r8 = (r31 + r9);
    r0 = (r9 + 1);
    r7 = (r9 + 2);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r6 = (r9 + 3);
    r5 = (r9 + 4);
    r4 = (r9 + 5);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r7));
    r3 = (r9 + 6);
    r0 = (r9 + 7);
    r9 = (r9 + 8);
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r8 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r8 + 7), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065FAA0;
    }
}

loc_8065FAE8:
{
    r0 = (r29 - r9);
    r3 = (r31 + r9);
    ctr = r0;
}

loc_8065FAF8:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r29))) {
        goto loc_8065FB0C;
    }
}

loc_8065FAFC:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r9));
    r9 = (r9 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065FAFC;
    }
}

loc_8065FB0C:
{
    r29 = (r29 + -1);
    r30 = (r31 + r29);
    goto loc_8065FB3C;
}

loc_8065FB18:
{
    r3 = (r1 + 8);
    r4 = (r29 + 1);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = MemoryInline::FlatRead8(r30);
    r29 = (r29 + -1);
    r31_addr_6 = (r31 + r3);
    r0 = MemoryInline::FlatRead8(r31_addr_6);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r30 = (r30 + -1);
    r31_addr_7 = (r31 + r3);
    MemoryInline::FlatWrite8(r31_addr_7, static_cast<uint8_t>(r4));
}

loc_8065FB3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8065FB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065FB18;
    }
}

loc_8065FB44:
{
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x8065FB50u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555538u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065FA4C func_8065FA4C preserves=true fpr_mask=0x00000000
