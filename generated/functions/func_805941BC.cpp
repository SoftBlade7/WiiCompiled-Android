#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805941BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805941BC;

loc_805941BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 7872);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = MemoryInline::FlatRead16((r3 + 60));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r5 = 0x809C0000u;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r5 + -10520));
    r5 = r29;
    r6 = 3;
    ctx->lr = 0x80594200u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80516808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r3));
    r3 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80594368;
    }
}

loc_80594210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80594214:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80594220;
    }
}

loc_80594218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8059421C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80594360;
    }
}

loc_80594220:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = -1;
    r29 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 16), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 16), f0.d);
    r6 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r30 + 26), static_cast<uint16_t>(r0));
    r5 = (r6 + 16640);
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead16((r30 + 60));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r30 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 20), r29);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 28), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 32), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 44), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516768u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516168u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r30 + 20), r3);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8059428C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805942C4;
    }
}

loc_80594290:
{
    r5 = 0;
    goto loc_805942B0;
}

loc_80594298:
{
    r4 = MemoryInline::FlatRead32((r30 + 52));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5 = (r5 + 1);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r4 + 20), r3);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r29));
}

loc_805942B0:
{
    r0 = MemoryInline::FlatRead8((r30 + 48));
    r4 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805942BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80594298;
    }
}

loc_805942C0:
{
    goto loc_805942D0;
}

loc_805942C4:
{
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r29));
    r3 = r30;
    ctx->lr = 0x805942D0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80593E18u>(ctx);
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
    cr = ctx->cr;
}

loc_805942D0:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead16((r30 + 60));
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516768u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r5 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 40));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = MemoryInline::FlatRead16((r5 + 42));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r5 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80594344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80594360;
    }
}

loc_80594348:
{
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
}

loc_80594360:
{
    r3 = 1;
    goto loc_80594398;
}

loc_80594368:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r5 = 0x802A0000u;
    MemoryInline::FlatWrite16((r30 + 26), static_cast<uint16_t>(r0));
    r4 = (r5 + 16640);
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
}

loc_80594398:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805941BC func_805941BC preserves=true fpr_mask=0x00000000
