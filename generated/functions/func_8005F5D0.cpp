#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005F5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r11_addr_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8005F5D0;

loc_8005F5D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r10 = 0x80270000u;
    r12 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    r10 = (r10 + 12208);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29584));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r11 = (r13 + -32488);
    r31 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8005F600:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29600));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    r4 = 0x80270000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29592));
    r4 = (r4 + 12064);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r12);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r10);
    }
    r10 = MemoryInline::FlatRead16((r31 + 52));
    r31 = MemoryInline::FlatRead32((r31 + 56));
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r10 = (r10_rot_0 & -4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r11_addr_0 = (r11 + r10);
    r10 = MemoryInline::FlatRead32(r11_addr_0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = MemoryInline::FlatRead32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f2.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r10);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r6);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r8);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r9);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005F698;
    }
}

loc_8005F680:
{
}

loc_8005F684:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005F698;
    }
}

loc_8005F688:
{
}

loc_8005F68C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005F698;
    }
}

loc_8005F690:
{
}

loc_8005F694:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8005F6A4;
    }
}

loc_8005F698:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_8005F6A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005F6AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005F6B8;
    }
}

loc_8005F6B0:
{
    r3 = r30;
    ctx->lr = 0x8005F6B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800600D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005F6B8:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFF803FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0xC0000FFF fpr_write=0xC0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005F5D0 func_8005F5D0 preserves=true fpr_mask=0x00000000
