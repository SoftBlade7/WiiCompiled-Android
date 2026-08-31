#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227CB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227CB4;

loc_80227CB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r8 = (r13 + -23976);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -23976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80227CCC:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80227D60;
    }
}

loc_80227CE0:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -25224));
    r8 = (r13 + -23984);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 44));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 40));
    f6.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r13 + -23984));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f5.d = PpcFmulsInline(f5.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -25208));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f6.d);
    f2.d = PpcFmulsInline(f6.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    MemoryInline::FlatWriteFloat32(r6, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    goto loc_80227E10;
}

loc_80227D60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80227D64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80227E10;
    }
}

loc_80227D68:
{
    r8 = (r13 + -23984);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    f2.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f8.d = MemoryInline::FlatReadFloat32((r13 + -23984));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -25224));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f5.d));
    f2.d = (-(f2.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    f5.d = (-(f4.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -25216));
    f3.d = PpcFmulsInline(f7.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f8.d = (-(f8.d));
    f9.d = PpcFmulsInline(f5.d, f3.d);
    f3.d = PpcFmulsInline(f7.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f2.d));
    f5.d = PpcFmulsInline(f8.d, f3.d);
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 44));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f4.d = (-(f4.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f1.d));
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -23984));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteFloat32(r6, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -23984));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32(r7, f0.d);
}

loc_80227E10:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x00000103 gpr_return=0x00000000 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227CB4 func_80227CB4 preserves=true fpr_mask=0x00000000
