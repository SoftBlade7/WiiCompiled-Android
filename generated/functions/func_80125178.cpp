#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125178(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80125178;

loc_80125178:
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
    r27 = r3;
    r28 = r4;
    r29 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x802F0000u;
    r31 = r3;
    r30 = MemoryInline::FlatRead32((r4 + 16576));
}

loc_801251AC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801251B8;
    }
}

loc_801251B0:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteRam32((r4 + 16576), r0);
}

loc_801251B8:
{
}

loc_801251BC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80125274;
    }
}

loc_801251C0:
{
    r3 = 0x802F0000u;
    r4 = 0x802F0000u;
    r3 = (r3 + 16576);
    r0 = (r27 + -1);
    r4 = (r4 + 16704);
    r5 = (r3 + 4);
    r3 = 0;
    r6 = (r4 + 4);
    ctr = r0;
}

loc_801251E8:
{
    if ((static_cast<uint32_t>(r27) <= static_cast<uint32_t>(1))) {
        goto loc_80125274;
    }
}

loc_801251EC:
{
    r0 = MemoryInline::FlatRead32(r5);
    r30 = 0;
}

loc_801251F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80125230;
    }
}

loc_801251FC:
{
    r7 = MemoryInline::FlatRead32(r6);
}

loc_80125204:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_80125218;
    }
}

loc_80125208:
{
    MemoryInline::FlatWrite32(r6, r3);
    r30 = r0;
    MemoryInline::FlatWrite32(r5, r3);
    goto loc_80125230;
}

loc_80125218:
{
}

loc_8012521C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80125230;
    }
}

loc_80125220:
{
    r4 = MemoryInline::FlatRead32((r7 + 4));
    r30 = r7;
    MemoryInline::FlatWrite32(r6, r4);
    MemoryInline::FlatWrite32(r4, r3);
}

loc_80125230:
{
}

loc_80125234:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80125268;
    }
}

loc_80125238:
{
    r0 = MemoryInline::FlatRead16((r30 + 56));
}

loc_80125240:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012524C;
    }
}

loc_80125244:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_8012524C:
{
    r12 = MemoryInline::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80125254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80125274;
    }
}

loc_80125258:
{
    r3 = r30;
    ctr = r12;
    ctx->lr = 0x80125264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80125274;
}

loc_80125268:
{
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801251EC;
    }
}

loc_80125274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80125278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801252D4;
    }
}

loc_8012527C:
{
    r4 = 0x802F0000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r4 = (r4 + 16576);
    r0 = 0;
    r4_addr_1 = (r4 + r5);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32(r30, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80125298:
{
    MemoryInline::FlatWrite32((r30 + 4), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801252B0;
    }
}

loc_801252A0:
{
    r4_addr_2 = (r4 + r5);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    r4_addr_3 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_3, r30);
    goto loc_801252C0;
}

loc_801252B0:
{
    r3 = 0x802F0000u;
    r4_addr_4 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_4, r30);
    r3 = (r3 + 16704);
    r3_addr_1 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_1, r30);
}

loc_801252C0:
{
    MemoryInline::FlatWrite32((r30 + 12), r27);
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 16), r28);
    MemoryInline::FlatWrite32((r30 + 20), r29);
    // inline leaf 0x80127AC0 (16 guest instruction(s))
    r4 = 413663232;
    r5 = 0;
    r0 = (r4 + 36);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 290u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 56), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r3 + 108), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r0);
    MemoryInline::WriteResolved16(guest_range_0, 198u, (r3 + 226), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 206u, (r3 + 234), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 226u, (r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 288u, (r3 + 316), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 278u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 278u, (r3 + 306), r5);
        MemoryInline::WriteResolved16(guest_range_0, 280u, (r3 + 308), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 282u, (r3 + 310), r5);
        MemoryInline::WriteResolved16(guest_range_0, 284u, (r3 + 312), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 286u, (r3 + 314), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x80127AC0
}

loc_801252D4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    r3 = r30;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80125178 func_80125178 preserves=true fpr_mask=0x00000000
