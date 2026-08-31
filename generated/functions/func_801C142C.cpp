#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C142C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C142C;

loc_801C142C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r6 = 0x802A0000u;
    r26 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r6 + -6920);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + 2352);
    r27 = r3;
    r4_addr_0 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_0);
    r29 = -4;
    r0 = MemoryInline::FlatRead32((r28 + 2236));
}

loc_801C1480:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_801C1488;
    }
}

loc_801C1484:
{
    r29 = -1;
}

loc_801C1488:
{
    r3 = MemoryInline::FlatRead32((r28 + 2232));
}

loc_801C1490:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_801C149C;
    }
}

loc_801C1494:
{
    r26 = 42;
    goto loc_801C14C4;
}

loc_801C149C:
{
    r0 = (r3 + -3);
}

loc_801C14A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801C14B0;
    }
}

loc_801C14A8:
{
    r26 = 50;
    goto loc_801C14C4;
}

loc_801C14B0:
{
    r0 = (r3 + -6);
    r26 = 90;
}

loc_801C14BC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801C14C4;
    }
}

loc_801C14C0:
{
    r26 = 54;
}

loc_801C14C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801C14C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C1584;
    }
}

loc_801C14CC:
{
    r5 = (r26 * r31);
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801C14DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(0));
}

loc_801C14E0:
{
    r3 = r31;
    r4 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C1578;
    }
}

loc_801C14EC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C14F0:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C1564;
    }
}

loc_801C14F8:
{
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C14F8;
    }
}

loc_801C155C:
{
    r3 = (r31 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801C1560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C1578;
    }
}

loc_801C1564:
{
    ctr = r3;
}

loc_801C1568:
{
    r3 = (r30 + r4);
    r4 = (r4 + r26);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r29));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C1568;
    }
}

loc_801C1578:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r28 + 2224), r0);
    MemoryInline::FlatWrite32((r28 + 2228), r31);
}

loc_801C1584:
{
    MemoryInline::FlatWrite32((r28 + 2220), r30);
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0007FB gpr_write=0xFC0008FB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C142C func_801C142C preserves=true fpr_mask=0x00000000
