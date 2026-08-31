#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051E420(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051E420;

loc_8051E420:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    r3 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r4 = (r4 + -1208);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051E444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051E46C;
    }
}

loc_8051E448:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 312));
    r3 = (r1 + 56);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 316));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 320));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 288));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 328));
    // inline leaf 0x8019AB4C (38 guest instruction(s))
    f11.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26376));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -26384));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f9.d = MemoryInline::FlatReadFloat32((r2 + -26380));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f11.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26372));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f8.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f7.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f10.d);
    f0.d = (-(f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f6.d = PpcFmulsInline(f9.d, f12.d);
    f0.d = PpcFmulsInline(f0.d, f7.d);
    f2.d = (-(f3.d));
    f3.d = PpcFmulsInline(f9.d, f11.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f6.d);
    f1.d = (-(f1.d));
    f4.d = PpcFmulsInline(f12.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    f2.d = PpcFmulsInline(f11.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f3.d);
    f1.d = PpcFmulsInline(f5.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f1.d);
    // end of inlined leaf 0x8019AB4C
    goto loc_8051E48C;
}

loc_8051E46C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 312));
    r3 = (r1 + 56);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 316));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 332));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 336));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 288));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 328));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x8019AB4Cu>(ctx);
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
}

loc_8051E48C:
{
    r3 = (r1 + 56);
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017301Cu>(ctx);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80199D04u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (r1 + 8);
    r4 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016DC34u>(ctx);
    r3 = 4;
    r4 = 9;
    r5 = 0;
    r6 = 4;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 4;
    r4 = 11;
    r5 = 0;
    r6 = 1;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 9;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r3 = 11;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016E5A4u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171C4Cu>(ctx);
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r3 = 1;
    r4 = 3;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    r3 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80173214u>(ctx);
    r3 = 0;
    ctx->lr = 0x8051E564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x805654ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0000016 gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051E420 func_8051E420 preserves=true fpr_mask=0x00000000
