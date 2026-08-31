#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082E854(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];

    goto loc_8082E854;

loc_8082E854:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8082E884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8081EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    r3 = 0x808E0000u;
    r3 = (r3 + -30112);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 240u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r3);
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r30 + 176), f0.d);
    r4 = 0x809C0000u;
    f7.d = MemoryInline::FlatReadFloat64((r3 + -14040));
    r3 = r30;
    r6 = MemoryInline::FlatRead32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r5 + -14044));
    r0 = MemoryInline::FlatRead16((r6 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 196u, (r30 + 196), f6.d);
    r5 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r5 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 224u, (r30 + 224), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f6.d));
    r5 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r5 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 204), r0);
    r5 = (r0 ^ -2147483648);
    r6 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r6 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = PPC_Fctiwz(f0.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    r6 = fctiwzword0;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 228u, (r30 + 228), f4.d);
    r7 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r7 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 208), r0);
    r0 = (r0 ^ -2147483648);
    r7 = MemoryInline::FlatRead32(r31);
    r7 = MemoryInline::FlatRead16((r7 + 44));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 232u, (r30 + 232), f3.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r5 = MemoryInline::FlatRead32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    r5 = MemoryInline::FlatRead16((r5 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (r30 + 236), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 212), r6);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 200u, (r30 + 200), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f6.d));
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword1;
    r0 = fctiwzword2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 216), r5);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r30 + 220), r0);
    }
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    MemoryInline::FlatWrite32((r4 + 80), r30);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFF000 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8082E854 func_8082E854 preserves=true fpr_mask=0x00000000
