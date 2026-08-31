#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A24F8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_807A24F8;

loc_807A24F8:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 184));
    r5 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = (-(f3.d));
    f4.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 21124));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f0.d = PpcFmulsInline(f0.d, f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 148), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 140), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 144), f1.d);
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000020 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A24F8 func_807A24F8 preserves=true fpr_mask=0x00000000
