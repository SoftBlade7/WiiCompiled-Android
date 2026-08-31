#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BE030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BE030;

loc_807BE030:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 20));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword0;
    r0 = (r8 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BE060;
    }
}

loc_807BE058:
{
    r3 = 0;
    goto loc_807BE124;
}

loc_807BE060:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r9 = fctiwzword1;
    r0 = (r9 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BE08C;
    }
}

loc_807BE084:
{
    r3 = 0;
    goto loc_807BE124;
}

loc_807BE08C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 28));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r10 = fctiwzword2;
    r0 = (r10 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BE0B8;
    }
}

loc_807BE0B0:
{
    r3 = 0;
    goto loc_807BE124;
}

loc_807BE0B8:
{
    r11 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 44));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 52));
    r6 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r11));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 48));
    r4 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r7 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 12));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    r0 = (r7 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
}

loc_807BE0E8:
{
    r6_addr_2 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = (r3 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BE0F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BE11C;
    }
}

loc_807BE0F4:
{
    r11 = (r11 + -1);
    r6 = (r6 + r3);
    r0 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r11));
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r3 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0_mrot_2 = (r0_rot_4 & 2);
    r0_mdest_2 = (r0 & -3);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_mrot_3 = (r4 & 1);
    r0_mdest_3 = (r0 & -2);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    goto loc_807BE0E8;
}

loc_807BE11C:
{
    r0 = (r3 & 2147483647);
    r3 = (r6 + r0);
}

loc_807BE124:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFA gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BE030 func_807BE030 preserves=true fpr_mask=0x00000000
