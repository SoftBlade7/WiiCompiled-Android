#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EF530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807EF530;

loc_807EF530:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_807EF53C:
{
    r7 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r7 = (r7 + -25848);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807EF650;
    }
}

loc_807EF54C:
{
    r6 = 1127219200;
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 4), 0, 92u, true, false);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 84u, (r7 + 88));
    r4 = (r4 + -8);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    r5 = (r4 ^ -2147483648);
    r4 = 64;
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 36u, (r7 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f2.d = (f0.d - f8.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r7 + 48));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 28u, (r7 + 32));
    f6.d = (f1.d * f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f1.d = (f0.d - f8.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 4));
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    f7.d = (f6.d * f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r7 + 52));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r7 + 60));
    r4 = MemoryInline::FlatRead32((r3 + 420));
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r7 + 56));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f5.d = (f7.d / f5.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f4.d = (f4.d - f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 420));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r12 = MemoryInline::FlatRead32(r3);
    r0 = fctiwzword0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    ctr = r12;
    ctx->lr = 0x807EF630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r0));
}

loc_807EF650:
{
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EF530 func_807EF530 preserves=true fpr_mask=0x00000000
