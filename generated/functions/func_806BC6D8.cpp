#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BC6D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_806BC6D8;

loc_806BC6D8:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    r30 = r3;
    r3 = (r1 + 116);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 180), 0, 56u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 232));
    r4 = (r30 + 180);
    // inline leaf 0x80514810 (10 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 68);
    r4 = (r30 + 180);
    r5 = (r30 + 192);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 228));
    r3 = (r1 + 104);
    r4 = (r1 + 68);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 56);
    r4 = (r1 + 116);
    r5 = (r1 + 104);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 44);
    r4 = (r1 + 56);
    r5 = (r30 + 272);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r4 = 0x808C0000u;
    r31 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + -3288));
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10000));
    r4 = (r1 + 44);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8051486Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 220));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 224));
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 224), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x806BC7ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 180));
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    r0 = MemoryInline::FlatRead32((r30 + 216));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r3 = MemoryInline::FlatRead32((r30 + 188));
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    f5.d = MemoryInline::FlatReadFloat32((r31 + -3288));
    r0 = MemoryInline::FlatRead32((r30 + 224));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f0.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = MemoryInline::FlatRead32((r30 + 184));
    r0 = MemoryInline::FlatRead32((r30 + 220));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 96), r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteFloat32((r30 + 228), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_806BC80C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f5.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806BC824;
    }
}

loc_806BC818:
{
    MemoryInline::FlatWriteFloat32((r30 + 216), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 224), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 228), f5.d);
}

loc_806BC824:
{
    r3 = (r1 + 8);
    r4 = (r30 + 48);
    r5 = (r30 + 216);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0 = (r0 | 1);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -3288));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 48), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 232), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000E gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x80000020 fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806BC6D8 func_806BC6D8 preserves=true fpr_mask=0x00000000
