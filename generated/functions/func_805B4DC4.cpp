#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B4DC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_805B4DC4;

loc_805B4DC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805B4DC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 100u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 100), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805B4DD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r6 = 0x80890000u;
    f8.d = MemoryInline::FlatReadFloat32((r6 + 10064));
    r6 = 0x80890000u;
    f7.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r4 = (r3 + 52);
    f4.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 4), f8.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = PpcFmulsInline(f1.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f8.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f8.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f9.d = MemoryInline::FlatReadFloat32((r6 + 10080));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 16), f8.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 20), f8.d);
    f6.d = PpcFmulsInline(f9.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 28), f8.d);
    f5.d = PpcFmulsInline(f9.d, f5.d);
    f4.d = PpcFmulsInline(f9.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 32), f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 36), f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 40), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 48), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 4), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 24), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 44), f0.d);
    r3 = (r3 + 4);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x8022F90Cu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
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

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x0000005B gpr_return=0x00000018 fpr_read=0xFC003C02 fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B4DC4 func_805B4DC4 preserves=true fpr_mask=0x00000000
