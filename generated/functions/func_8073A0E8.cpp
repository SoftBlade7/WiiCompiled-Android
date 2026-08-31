#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073A0E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8073A1DC_loc_0 = 0;
    uint32_t addr_lhax_8073A1E8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073A0E8;

loc_8073A0E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r31 = 0x808A0000u;
    r6 = (r0 & 1);
    r27 = r3;
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r28 = r4;
    r31 = (r31 + 10008);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8073A128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073A36C;
    }
}

loc_8073A12C:
{
    r3 = 0x808D0000u;
    r26 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -20520));
    r5 = 6;
    r3 = MemoryInline::FlatRead32((r26 + 12016));
    r4 = (r4 + 12);
    ctx->lr = 0x8073A148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80786B14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 12016));
    r30 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80785E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8073A158:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073A21C;
    }
}

loc_8073A160:
{
    r4 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -20516));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073A17C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073A188;
    }
}

loc_8073A180:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073A184:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073A190;
    }
}

loc_8073A188:
{
    r0 = 0;
    goto loc_8073A194;
}

loc_8073A190:
{
    r0 = 1;
}

loc_8073A194:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A198:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A21C;
    }
}

loc_8073A19C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8073A1B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082B4E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = 0x809C0000u;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 131070);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    addr_lhax_8073A1DC_loc_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead16(addr_lhax_8073A1DC_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r5_addr_1 = (r5 + r3);
    r3 = MemoryInline::FlatRead32(r5_addr_1);
    addr_lhax_8073A1E8_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8073A1E8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8073A1F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8073A21C;
    }
}

loc_8073A1F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r30 = 1;
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 52));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
}

loc_8073A21C:
{
}

loc_8073A220:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8073A22C;
    }
}

loc_8073A224:
{
    r26 = 1;
    goto loc_8073A300;
}

loc_8073A22C:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_8073A240:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8073A250;
    }
}

loc_8073A244:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A24C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A258;
    }
}

loc_8073A250:
{
    r26 = 0;
    goto loc_8073A300;
}

loc_8073A258:
{
    r26 = 0;
    r30 = 0x808D0000u;
    r29 = 0x809C0000u;
    goto loc_8073A2EC;
}

loc_8073A268:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + -20516));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = (-(f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073A280:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073A28C;
    }
}

loc_8073A284:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073A288:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073A294;
    }
}

loc_8073A28C:
{
    r0 = 0;
    goto loc_8073A298;
}

loc_8073A294:
{
    r0 = 1;
}

loc_8073A298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A29C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A2EC;
    }
}

loc_8073A2A0:
{
    r3 = r25;
    // inline leaf 0x807A2234 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 89));
    // end of inlined leaf 0x807A2234
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073A2AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A2EC;
    }
}

loc_8073A2B0:
{
    r0 = MemoryInline::FlatRead32((r25 + 120));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A2B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A2EC;
    }
}

loc_8073A2BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r26 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 68));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 72));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    goto loc_8073A300;
}

loc_8073A2EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 12016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80785DF4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8073A2F8:
{
    r25 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8073A268;
    }
}

loc_8073A300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8073A304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A364;
    }
}

loc_8073A308:
{
    r3 = 0x809C0000u;
    r4 = 100;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r27 + 12));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r4 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8073A350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073A35C;
    }
}

loc_8073A354:
{
    r0 = 1;
    goto loc_8073A368;
}

loc_8073A35C:
{
    r0 = 3;
    goto loc_8073A368;
}

loc_8073A364:
{
    r0 = 0;
}

loc_8073A368:
{
    MemoryInline::FlatWrite32((r28 + 44), r0);
}

loc_8073A36C:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073A0E8 func_8073A0E8 preserves=true fpr_mask=0x00000000
