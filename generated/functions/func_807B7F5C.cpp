#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B7F5C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_807B7F5C;

loc_807B7F5C:
{
    r5 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 68u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 25224));
    r5 = 0x808A0000u;
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 25232));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 48));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f5.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 56));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 60));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 68));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 72));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 80));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 84));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 92));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f0.d);
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000020 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B7F5C func_807B7F5C preserves=true fpr_mask=0x00000000
