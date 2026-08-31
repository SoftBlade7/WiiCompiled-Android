#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081D090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8081D090;

loc_8081D090:
{
    MemoryInline::FlatWriteRam32((r1 + -1728), r1);
    r1 = (r1 + -1728);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1732), r0);
    MemoryInline::FlatWriteRam32((r1 + 1724), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -18216);
    MemoryInline::FlatWriteRam32((r1 + 1720), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 1716), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8081D0C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081E0B0;
    }
}

loc_8081D0C4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    MemoryInline::FlatWrite32((r29 + 8), r3);
    MemoryInline::FlatWrite32((r29 + 12), r30);
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(35));
}

loc_8081D0E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8081E010;
    }
}

loc_8081D0E4:
{
    r4 = 0x808D0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + 27928);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8081D16Cu:
        goto loc_8081D16C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8081D16C:
{
    f3.d = MemoryInline::FlatReadFloat32(r31);
    r3 = 68;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->lr = 0x8081D19Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081D1A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081D1B0;
    }
}

loc_8081D1A4:
{
    r5 = (r1 + 8);
    r4 = 2;
    ctx->lr = 0x8081D1B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808364E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8081D1B0:
{
    MemoryInline::FlatWrite32((r29 + 4), r3);
    goto loc_8081E0B0;
}

loc_8081E010:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 220u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = 68;
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r31 + 192));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r31 + 84));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 208u, (r31 + 208));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 212u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 212u, (r31 + 212));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 216u, (r31 + 216));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 1536), 0, 84u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 1536), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 1540), f9.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 1544), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 1548), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 1552), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 1556), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 1560), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 1564), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 1568), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 1572), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 1576), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 1580), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 1584), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 1588), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r1 + 1592), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r1 + 1596), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r1 + 1600), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 1604), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r1 + 1608), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r1 + 1612), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r1 + 1616), f0.d);
    ctx->lr = 0x8081E098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081E09C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081E0AC;
    }
}

loc_8081E0A0:
{
    r5 = (r1 + 1536);
    r4 = 7;
    ctx->lr = 0x8081E0ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808364E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8081E0AC:
{
    MemoryInline::FlatWrite32((r29 + 4), r3);
}

loc_8081E0B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 1732));
    r31 = MemoryInline::FlatRead32((r1 + 1724));
    r30 = MemoryInline::FlatRead32((r1 + 1720));
    r29 = MemoryInline::FlatRead32((r1 + 1716));
    ctx->lr = r0;
    r1 = (r1 + 1728);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8081D090 func_8081D090 preserves=true fpr_mask=0x00000000
