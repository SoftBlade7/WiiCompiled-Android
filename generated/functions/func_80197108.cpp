#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80197108(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80197108;

loc_80197108:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80190000u;
    r31 = (r31 + 28388);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = (r3 + 96);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -29212), 0, 3660u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3644u, (r13 + -25568));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_80197140:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80197150;
    }
}

loc_80197148:
{
    r31 = 0x80190000u;
    r31 = (r31 + 28092);
}

loc_80197150:
{
    r6 = MemoryInline::FlatRead8((r4 + 40));
}

loc_80197158:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_801971E0;
    }
}

loc_8019715C:
{
    r5 = MemoryInline::FlatRead8((r4 + 54));
    r0 = (r5 + 253);
    r0 = (r0 & 255);
}

loc_8019716C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801971E0;
    }
}

loc_80197170:
{
    r0 = MemoryInline::FlatRead8((r3 + 1310));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801971B4;
    }
}

loc_8019717C:
{
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWrite8((r3 + 1310), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26516));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3652u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 3652u, (r13 + -25560));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 3656u, (r13 + -25556));
        }
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWrite32(r30, r3);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f2.d);
}

loc_801971B4:
{
    r4 = MemoryInline::FlatRead8((r4 + 48));
    r12 = r31;
    r5 = MemoryInline::FlatRead8((r29 + 49));
    r3 = r30;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -29212));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r13 + -29208));
    ctr = r12;
    ctx->lr = 0x801971DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80197364;
}

loc_801971E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
}

loc_801971E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80197364;
    }
}

loc_801971E8:
{
    r5 = MemoryInline::FlatRead8((r4 + 54));
    r0 = (r5 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801971F8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80197364;
    }
}

loc_801971FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1310));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197204:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197254;
    }
}

loc_80197208:
{
    r7 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWrite8((r3 + 1310), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead16((r3 + 1232));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3652u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 3652u, (r13 + -25560));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 3656u, (r13 + -25556));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3652u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 3652u, (r13 + -25560));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 3656u, (r13 + -25556));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 24), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 4), r7);
    }
    MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r7);
    MemoryInline::FlatWrite16((r3 + 1236), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1238), static_cast<uint16_t>(r0));
}

loc_80197254:
{
    r12 = r31;
    r3 = (r30 + 12);
    r4 = MemoryInline::FlatRead16((r4 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r29 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -29204));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -29200));
        }
    }
    ctr = r12;
    ctx->lr = 0x80197274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = r31;
    r3 = (r30 + 20);
    r4 = MemoryInline::FlatRead16((r29 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r29 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead32((r13 + -29204));
    r7 = MemoryInline::FlatRead32((r13 + -29200));
    ctr = r12;
    ctx->lr = 0x80197294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r13 + -29196));
    r0 = MemoryInline::FlatRead8((r29 + 52));
    r4 = MemoryInline::FlatRead32((r13 + -29192));
}

loc_801972A4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_801972B4;
    }
}

loc_801972A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_801972FC;
}

loc_801972B4:
{
}

loc_801972B8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_801972C8;
    }
}

loc_801972BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_801972FC;
}

loc_801972C8:
{
    r3 = (r0 - r5);
    r0 = (r4 - r5);
    r3 = (r3 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
}

loc_801972FC:
{
    r5 = MemoryInline::FlatRead32((r13 + -29196));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r4 = MemoryInline::FlatRead32((r13 + -29192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8019730C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8019731C;
    }
}

loc_80197310:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_80197364;
}

loc_8019731C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80197320:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80197330;
    }
}

loc_80197324:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_80197364;
}

loc_80197330:
{
    r3 = (r0 - r5);
    r0 = (r4 - r5);
    r3 = (r3 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_80197364:
{
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80197108 func_80197108 preserves=true fpr_mask=0x00000000
