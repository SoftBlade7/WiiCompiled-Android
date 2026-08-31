#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FB2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FB2D0;

loc_801FB2D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r7);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r27 = r6;
    r28 = r8;
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801FB308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB34C;
    }
}

loc_801FB30C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FB31C;
    }
}

loc_801FB310:
{
}

loc_801FB314:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801FB328;
    }
}

loc_801FB318:
{
    goto loc_801FB394;
}

loc_801FB31C:
{
}

loc_801FB320:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_801FB394;
    }
}

loc_801FB324:
{
    goto loc_801FB36C;
}

loc_801FB328:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(4095));
}

loc_801FB32C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB338;
    }
}

loc_801FB330:
{
    r3 = 16;
    goto loc_801FB398;
}

loc_801FB338:
{
    r5 = (r6 & 65535);
    r6 = r28;
    r4 = (r4 & 65535);
    ctx->lr = 0x801FB348u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FDDC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FB398;
}

loc_801FB34C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(65535));
}

loc_801FB350:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB35C;
    }
}

loc_801FB354:
{
    r3 = 16;
    goto loc_801FB398;
}

loc_801FB35C:
{
    r5 = r27;
    r6 = r28;
    ctx->lr = 0x801FB368u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FE650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FB398;
}

loc_801FB36C:
{
    r5 = 268435456;
    r0 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801FB378:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB384;
    }
}

loc_801FB37C:
{
    r3 = 16;
    goto loc_801FB398;
}

loc_801FB384:
{
    r5 = r27;
    r6 = r28;
    ctx->lr = 0x801FB390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FEC84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FB398;
}

loc_801FB394:
{
    r3 = 15;
}

loc_801FB398:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FB39C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB3A4;
    }
}

loc_801FB3A0:
{
    goto loc_801FB4E0;
}

loc_801FB3A4:
{
    r5 = MemoryInline::FlatRead32((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FB3AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB3B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB3B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB3BC:
{
}

loc_801FB3C0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801FB428;
    }
}

loc_801FB3C4:
{
    r3 = MemoryInline::FlatRead16((r29 + 28));
    r0 = MemoryInline::FlatRead32((r29 + 36));
    r4 = (r3 + 1);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801FB3D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB3DC:
{
    r0 = (r3 * r4);
    r0 = (r31 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801FB3F4;
    }
}

loc_801FB3E8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0;
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r3);
}

loc_801FB3F4:
{
    r0 = MemoryInline::FlatRead32((r29 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801FB3FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB400:
{
    r3 = MemoryInline::FlatRead16((r29 + 28));
    r4 = (r31 + -1);
    MemoryInline::FlatWrite32((r29 + 40), r4);
    r0 = (r3 + 1);
    r3 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r3 * r0);
    MemoryInline::FlatWrite32((r29 + 32), r3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r0));
    goto loc_801FB4DC;
}

loc_801FB428:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
    r4 = 0x80250000u;
    r4 = (r4 + 12640);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_801FB448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB44C:
{
    r7 = MemoryInline::FlatRead32(r28);
    r3 = r29;
    r4 = r31;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FB464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FAD34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_801FB468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB470;
    }
}

loc_801FB46C:
{
    goto loc_801FB4E0;
}

loc_801FB470:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB478:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB47C:
{
    r4 = MemoryInline::FlatRead32((r29 + 32));
    r0 = MemoryInline::FlatRead32((r29 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801FB488:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB4DC;
    }
}

loc_801FB494:
{
    r3 = MemoryInline::FlatRead16((r29 + 28));
    r0 = (r3 + 1);
    r0 = (r4 * r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801FB4A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB4CC;
    }
}

loc_801FB4A8:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 24));
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r30);
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 32), r0);
    goto loc_801FB4D8;
}

loc_801FB4CC:
{
    r3 = MemoryInline::FlatRead16((r29 + 30));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r0));
}

loc_801FB4D8:
{
    MemoryInline::FlatWrite32((r29 + 40), r31);
}

loc_801FB4DC:
{
    r3 = 0;
}

loc_801FB4E0:
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
// RECOMP_REGISTRATION base 0x801FB2D0 func_801FB2D0 preserves=true fpr_mask=0x00000000
