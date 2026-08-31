#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B6150(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B6150;

loc_805B6150:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r5 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    r31 = r7;
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
    r30 = r4;
    r4 = r6;
    r6 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r30 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r5);
    r5 = (r1 + 44);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r6);
    MemoryInline::FlatWriteFloat32((r3 + 276), f0.d);
    r3 = (r3 + 256);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r0);
    ctx->lr = 0x805B61ACu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r29 + 256);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r4 = (r1 + 32);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r5 = (r1 + 20);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->lr = 0x805B61ECu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f7.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805B61F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B6248;
    }
}

loc_805B623C:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10064));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_805B6248:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 284));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 10064));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 288));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 284), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 288), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 292), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FA gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0xC0000080 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B6150 func_805B6150 preserves=true fpr_mask=0x00000000
