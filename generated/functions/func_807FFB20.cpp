#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FFB20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FFB20;

loc_807FFB20:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -21040);
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r30);
    r30 = r5;
    r5 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r28);
    r28 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r0);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r0);
    ctx->lr = 0x807FFB64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081A980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r4 = 0x808B0000u;
    r3 = (r3 + 20464);
    MemoryInline::FlatWrite32(r28, r3);
    r3 = 0x809C0000u;
    r4 = (r4 + -20856);
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x807FFB88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082C178u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r28 + 84));
    r5 = MemoryInline::FlatRead32((r28 + 48));
    r4 = MemoryInline::FlatRead32((r28 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FFB98:
{
    r0 = MemoryInline::FlatRead32((r28 + 56));
    MemoryInline::FlatWrite16((r28 + 260), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r28 + 264), r5);
    MemoryInline::FlatWrite32((r28 + 268), r4);
    MemoryInline::FlatWrite32((r28 + 272), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FFBB8;
    }
}

loc_807FFBB0:
{
    r6 = (r28 + 72);
    goto loc_807FFBE8;
}

loc_807FFBB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r28 + 88);
    ctx->lr = 0x807FFBCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r6 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_807FFBE8:
{
    r5 = MemoryInline::FlatRead32(r6);
}

loc_807FFBF0:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r6 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWrite32((r28 + 276), r5);
    MemoryInline::FlatWrite32((r28 + 280), r4);
    MemoryInline::FlatWrite32((r28 + 284), r0);
    MemoryInline::FlatWriteFloat32((r28 + 288), f0.d);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead16((r4 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 60);
    MemoryInline::FlatWrite32((r28 + 368), r0);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead16((r4 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 60);
    MemoryInline::FlatWrite32((r28 + 372), r0);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807FFC40;
    }
}

loc_807FFC3C:
{
    r3 = -1;
}

loc_807FFC40:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r31 + 72));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807FFC58:
{
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r3 = 1;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
        }
    }
    f3.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 376), f0.d);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead16((r4 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FFC94;
    }
}

loc_807FFC90:
{
    r3 = -1;
}

loc_807FFC94:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r31 + 72));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807FFCAC:
{
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r3 = 1;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
        }
    }
    f3.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 380), f0.d);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead16((r4 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FFCE8;
    }
}

loc_807FFCE4:
{
    r3 = -1;
}

loc_807FFCE8:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r31 + 72));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    r3 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r4 = (r28 + 276);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
        }
    }
    f3.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 384), f0.d);
    ctx->lr = 0x807FFD30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x808D0000u;
    r29 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 20212));
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20208));
    r4 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 116u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 20));
    r3 = r28;
    MemoryInline::FlatWriteFloat32((r28 + 308), f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 312), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 28));
    MemoryInline::FlatWriteFloat32((r28 + 316), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 268));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 20208));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 388), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20208));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 392), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 100u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 104u, (r1 + 124));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 92u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r1 + 116));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r1 + 112));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807FFB20 func_807FFB20 preserves=true fpr_mask=0x00000000
