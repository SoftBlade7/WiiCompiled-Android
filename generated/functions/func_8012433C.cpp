#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012433C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r29_ca_0 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_10 = 0;
    uint32_t r5_ca_11 = 0;
    uint32_t r5_ca_12 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_ca_6 = 0;
    uint32_t r5_ca_7 = 0;
    uint32_t r5_ca_8 = 0;
    uint32_t r5_ca_9 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_10 = 0;
    uint32_t r5_not_11 = 0;
    uint32_t r5_not_12 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
    uint32_t r5_not_6 = 0;
    uint32_t r5_not_7 = 0;
    uint32_t r5_not_8 = 0;
    uint32_t r5_not_9 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012433C;

loc_8012433C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = 0;
    r3 = 0;
    r0 = 0;
    r29 = 0;
    r30 = 0;
    r31 = -855638016;
    goto loc_801244B8;
}

loc_8012436C:
{
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r0 = (r0 & -33);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r0 = (r0 & -2);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryInline::FlatRead32((r31 + 27656));
    r3 = (r0 & 2147483647);
}

loc_801243A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 27656));
    r0 = (r0 & 2147483647);
}

loc_801243AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801243A0;
    }
}

loc_801243B0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r27 = r4;
    r28 = r3;
    r0 = (r0 & -3);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r0 = (r0 & -2);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryInline::FlatRead32((r31 + 27656));
    r3 = (r0 & 2147483647);
}

loc_801243E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 27656));
    r0 = (r0 & 2147483647);
}

loc_801243F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801243E4;
    }
}

loc_801243F4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r8 = (r4 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r5_not_2 = ~(r28);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r3);
    r5 = (r5 + r5_ca_2);
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r7 = (r5 ^ -2147483648);
    r0 = MemoryInline::FlatRead32((r31 + 27648));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r31 + 27648), r0);
    r10 = MemoryInline::FlatRead32((r13 + -26540));
    r12 = MemoryInline::FlatRead32((r13 + -26508));
    r9 = MemoryInline::FlatRead32((r13 + -26544));
    r11 = MemoryInline::FlatRead32((r13 + -26512));
    r6 = (r12 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0_not_2 = ~(r9);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r11);
    r0 = (r0 + r0_ca_2);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_3 = ~(r5);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r5_not_3 + r7);
    r5 = (r5 + r5_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_4 = ~(r7);
    r5_ca_4 = (xer >> 29) & 1u;
    r5 = (r5_not_4 + r7);
    r5 = (r5 + r5_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8012445C;
    }
}

loc_8012444C:
{
    r30 = MemoryInline::FlatRead32((r13 + -26528));
    r0 = 1;
    r29 = MemoryInline::FlatRead32((r13 + -26524));
    goto loc_801244B8;
}

loc_8012445C:
{
    r6 = (r12 + r10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12)) + static_cast<uint64_t>(static_cast<uint32_t>(r10)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r11 + r9);
    r0 = (r0 + r0_ca_3);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_5 = ~(r5);
    r5_ca_5 = (xer >> 29) & 1u;
    r5 = (r5_not_5 + r7);
    r5 = (r5 + r5_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_6 = ~(r7);
    r5_ca_6 = (xer >> 29) & 1u;
    r5 = (r5_not_6 + r7);
    r5 = (r5 + r5_ca_6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_6)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_6)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801244B4;
    }
}

loc_8012447C:
{
    r5 = MemoryInline::FlatRead32((r13 + -26516));
    r0 = MemoryInline::FlatRead32((r13 + -26520));
    r6 = (r5 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_3 = ~(r9);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_4);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_7 = ~(r5);
    r5_ca_7 = (xer >> 29) & 1u;
    r5 = (r5_not_7 + r7);
    r5 = (r5 + r5_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_8 = ~(r7);
    r5_ca_8 = (xer >> 29) & 1u;
    r5 = (r5_not_8 + r7);
    r5 = (r5 + r5_ca_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_8)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_8)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801244B4;
    }
}

loc_801244A4:
{
    r30 = MemoryInline::FlatRead32((r13 + -26536));
    r0 = 1;
    r29 = MemoryInline::FlatRead32((r13 + -26532));
    goto loc_801244B8;
}

loc_801244B4:
{
    r0 = 0;
}

loc_801244B8:
{
}

loc_801244BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012436C;
    }
}

loc_801244C0:
{
    r31 = (r4 + r29);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r29)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r29_ca_0 = (xer >> 29) & 1u;
    r29 = (r3 + r30);
    r29 = (r29 + r29_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(r30)) + (static_cast<uint64_t>(static_cast<uint32_t>(r29_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801244C8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 ^ -2147483648);
    r5 = (r29 ^ -2147483648);
    r3 = (r4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r5_not_11 = ~(r5);
    r5_ca_11 = (xer >> 29) & 1u;
    r5 = (r5_not_11 + r0);
    r5 = (r5 + r5_ca_11);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_11)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_11)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_12 = ~(r0);
    r5_ca_12 = (xer >> 29) & 1u;
    r5 = (r5_not_12 + r0);
    r5 = (r5 + r5_ca_12);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_12)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_12)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801244C8;
    }
}

loc_801244E8:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
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

// RECOMP_GUEST_ABI gpr_read=0xF80037FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012433C func_8012433C preserves=true fpr_mask=0x00000000
