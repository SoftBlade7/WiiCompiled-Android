#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD374(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807BD374;

loc_807BD374:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14523));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BD380:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BD3A0;
    }
}

loc_807BD384:
{
    r4 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead8((r3 + 32));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_807BD3A0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2936));
}

loc_807BD3B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BD3C0;
    }
}

loc_807BD3B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807BD3B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD4E4;
    }
}

loc_807BD3BC:
{
    goto loc_807BD5B4;
}

loc_807BD3C0:
{
    r5 = 0x809C0000u;
    r11 = 0;
    r0 = MemoryInline::FlatRead8((r5 + 14520));
    r12 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BD3D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BD46C;
    }
}

loc_807BD3D8:
{
    r6 = (r3 * 240);
    r5 = 0x809C0000u;
    r10 = (r4 + 40);
    r8 = MemoryInline::FlatRead32((r5 + -10448));
    r9 = (r4 + r6);
    ctr = r0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BD46C;
    }
}

loc_807BD3F4:
{
    r5 = (r12 & 255);
    r7 = (r5 * 240);
    r5 = (r10 + r7);
    r5 = MemoryInline::FlatRead32((r5 + 204));
}

loc_807BD408:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_807BD414;
    }
}

loc_807BD40C:
{
    r5 = 0;
    goto loc_807BD43C;
}

loc_807BD414:
{
    r6 = MemoryInline::FlatRead32((r9 + 244));
}

loc_807BD41C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_807BD428;
    }
}

loc_807BD420:
{
    r5 = 0;
    goto loc_807BD43C;
}

loc_807BD428:
{
    r5 = (r4 + r7);
    r5 = MemoryInline::FlatRead32((r5 + 244));
    r5 = (r6 - r5);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 134217727);
}

loc_807BD43C:
{
}

loc_807BD440:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807BD464;
    }
}

loc_807BD444:
{
    r7 = MemoryInline::FlatRead32((r8 + 12));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r5 = (r11 & 65535);
    r7_addr_2 = (r7 + r6);
    r6 = MemoryInline::FlatRead32(r7_addr_2);
    r6 = MemoryInline::FlatRead16((r6 + 34));
}

loc_807BD45C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r5))) {
        goto loc_807BD464;
    }
}

loc_807BD460:
{
    r11 = r6;
}

loc_807BD464:
{
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BD3F4;
    }
}

loc_807BD46C:
{
    r5 = 0x809C0000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & 1020);
    r5 = MemoryInline::FlatRead32((r5 + -10448));
}

loc_807BD47C:
{
    r3 = (r11 & 65535);
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_0 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_0);
    r4 = MemoryInline::FlatRead16((r4 + 34));
    r4 = (r3 - r4);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_807BD4A0;
    }
}

loc_807BD494:
{
    r0 = 1;
    r5 = 3;
    goto loc_807BD4BC;
}

loc_807BD4A0:
{
}

loc_807BD4A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_807BD4B4;
    }
}

loc_807BD4A8:
{
    r0 = 1;
    r5 = 4;
    goto loc_807BD4BC;
}

loc_807BD4B4:
{
    r0 = 2;
    r5 = 5;
}

loc_807BD4BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_807BD4C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807BD4CC;
    }
}

loc_807BD4C4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_807BD4CC:
{
    r3 = (r4 ^ -2147483648);
    r0 = (r5 - r4);
    r0_addc_left_1 = r0;
    r0 = (r0_addc_left_1 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_1 = ~(r0);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r0);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + 3);
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_807BD4E4:
{
    r0 = (r3 * 240);
    r5 = 0x809C0000u;
    r10 = MemoryInline::FlatRead8((r5 + 14520));
    r8 = 0;
    r5 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r5 + 18796));
    r6 = (r4 + r0);
    r9 = 0;
    ctr = r10;
}

loc_807BD50C:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_807BD57C;
    }
}

loc_807BD510:
{
    r0 = (r9 & 255);
    r0 = (r0 * 240);
    r5 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 244));
}

loc_807BD524:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_807BD530;
    }
}

loc_807BD528:
{
    r0 = 0;
    goto loc_807BD550;
}

loc_807BD530:
{
    r0 = MemoryInline::FlatRead32((r6 + 244));
}

loc_807BD538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_807BD544;
    }
}

loc_807BD53C:
{
    r0 = 0;
    goto loc_807BD550;
}

loc_807BD544:
{
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_807BD550:
{
}

loc_807BD554:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BD574;
    }
}

loc_807BD558:
{
    r5 = (r9 & 255);
    r0 = (r8 & 255);
    r5 = (r7 + r5);
    r5 = MemoryInline::FlatRead8((r5 + 7954));
}

loc_807BD56C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_807BD574;
    }
}

loc_807BD570:
{
    r8 = r5;
}

loc_807BD574:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BD510;
    }
}

loc_807BD57C:
{
    r3 = (r7 + r3);
    r0 = (r8 & 255);
    r3 = MemoryInline::FlatRead8((r3 + 7954));
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807BD590:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807BD59C;
    }
}

loc_807BD594:
{
    r3 = 1;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_807BD59C:
{
    r3 = (r0 ^ -2147483648);
    r0_subfic_ra_0 = r0;
    r0 = (7 - r0_subfic_ra_0);
    r0_addc_left_0 = r0;
    r0 = (r0_addc_left_0 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_0 = ~(r0);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + 3);
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_807BD5B4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807BD374 func_807BD374 preserves=true fpr_mask=0x00000000
