#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CB4C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_addc_left_0 = 0;
    uint32_t r12_addc_left_1 = 0;
    uint32_t r12_ca_0 = 0;
    uint32_t r12_not_0 = 0;
    uint32_t r12_subfe_rb_0 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_not_0 = 0;

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
    uint32_t xer = ctx->xer;

    goto loc_801CB4C0;

loc_801CB4C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_801CB4C8:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801CB4E4;
    }
}

loc_801CB4D0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r9 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    goto loc_801CB4EC;
}

loc_801CB4E4:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = MemoryInline::FlatRead16(r4);
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
}

loc_801CB4EC:
{
}

loc_801CB4F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_801CB4FC;
    }
}

loc_801CB4F4:
{
    r10 = 1;
    goto loc_801CB504;
}

loc_801CB4FC:
{
    r10 = -1;
    r0 = (0 - r0);
}

loc_801CB504:
{
}

loc_801CB508:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_801CB514;
    }
}

loc_801CB50C:
{
    r11 = 1;
    goto loc_801CB51C;
}

loc_801CB514:
{
    r11 = -1;
    r9 = (0 - r9);
}

loc_801CB51C:
{
    r31 = (r0 ^ -2147483648);
    r12 = (r7 - r0);
    r12_addc_left_0 = r12;
    r12 = (r12_addc_left_0 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r0 - r7);
    r12_subfe_rb_0 = r12;
    r12_not_0 = ~(r12);
    r12_ca_0 = (xer >> 29) & 1u;
    r12 = (r12_not_0 + r12_subfe_rb_0);
    r12 = (r12 + r12_ca_0);
    r31 = (r9 ^ -2147483648);
    r0 = (r0 & ~r12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r12 = (r7 - r9);
    r7 = (r9 - r7);
    r12_addc_left_1 = r12;
    r12 = (r12_addc_left_1 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r9_not_0 = ~(r12);
    r9_ca_0 = (xer >> 29) & 1u;
    r9 = (r9_not_0 + r12);
    r9 = (r9 + r9_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r12)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r9 = (r7 & ~r9);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CB580;
    }
}

loc_801CB550:
{
}

loc_801CB554:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_801CB580;
    }
}

loc_801CB558:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801CB55C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CB570;
    }
}

loc_801CB560:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_801CB668;
}

loc_801CB570:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_801CB668;
}

loc_801CB580:
{
    r12 = (r6 * r0);
    r31 = (r6 * r9);
}

loc_801CB58C:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r12))) {
        goto loc_801CB5E8;
    }
}

loc_801CB590:
{
    r7 = (r5 - r6);
    r7 = (r9 * r7);
    r6 = (r6 * r5);
    r7 = (r12 + r7);
}

loc_801CB5A4:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_801CB63C;
    }
}

loc_801CB5A8:
{
}

loc_801CB5AC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801CB5CC;
    }
}

loc_801CB5B0:
{
    r5 = (r0 * r6);
    r0 = (r9 * r6);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r5 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    goto loc_801CB63C;
}

loc_801CB5CC:
{
    r5 = (r0 * r6);
    r0 = (r9 * r6);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r5 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    goto loc_801CB63C;
}

loc_801CB5E8:
{
    r7 = (r5 - r6);
    r7 = (r0 * r7);
    r6 = (r6 * r5);
    r7 = (r31 + r7);
}

loc_801CB5FC:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_801CB63C;
    }
}

loc_801CB600:
{
}

loc_801CB604:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801CB624;
    }
}

loc_801CB608:
{
    r5 = (r0 * r6);
    r0 = (r9 * r6);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r5 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    goto loc_801CB63C;
}

loc_801CB624:
{
    r5 = (r0 * r6);
    r0 = (r9 * r6);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r5 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_801CB63C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801CB640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CB658;
    }
}

loc_801CB644:
{
    r5 = (r10 * r0);
    r0 = (r11 * r9);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_801CB668;
}

loc_801CB658:
{
    r5 = (r10 * r0);
    r0 = (r11 * r9);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_801CB668:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001EE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CB4C0 func_801CB4C0 preserves=true fpr_mask=0x00000000
