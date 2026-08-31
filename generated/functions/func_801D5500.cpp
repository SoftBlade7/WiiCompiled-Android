#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D5500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;
    uint32_t r8_ca_4 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D5500;

loc_801D5500:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r11 = 65;
    r9 = 90;
    r10 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    ctr = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D551C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D55BC;
    }
}

loc_801D5520:
{
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r12 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_801D5544;
    }
}

loc_801D553C:
{
}

loc_801D5540:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801D555C;
    }
}

loc_801D5544:
{
}

loc_801D5548:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_801D555C;
    }
}

loc_801D554C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801D5550:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D555C;
    }
}

loc_801D5554:
{
    r5 = 0;
    goto loc_801D55BC;
}

loc_801D555C:
{
    r7 = (static_cast<int32_t>(r31) >> 31);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r0 = (r31 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r7 + r10);
    r8 = (r8 + r8_ca_2);
    r7 = (static_cast<int32_t>(r9) >> 31);
    r0 = (r9 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r7 + r6);
    r0 = (r0 + r0_ca_2);
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D5584;
    }
}

loc_801D5580:
{
    r31 = (r31 + 32);
}

loc_801D5584:
{
    r7 = (static_cast<int32_t>(r12) >> 31);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & 1);
    r0 = (r12 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r8_ca_3 = (xer >> 29) & 1u;
    r8 = (r7 + r10);
    r8 = (r8 + r8_ca_3);
    r7 = (static_cast<int32_t>(r9) >> 31);
    r0 = (r9 - r12);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r12) ? 1u : 0u) << 29);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r7 + r6);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D55AC;
    }
}

loc_801D55A8:
{
    r12 = (r12 + 32);
}

loc_801D55AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r31));
}

loc_801D55B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D55BC;
    }
}

loc_801D55B4:
{
    r5 = (r5 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5520;
    }
}

loc_801D55BC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r5;
    r1 = (r1 + 16);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D5500 func_801D5500 preserves=true fpr_mask=0x00000000
