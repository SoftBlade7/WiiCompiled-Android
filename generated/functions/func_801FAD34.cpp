#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FAD34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FAD34;

loc_801FAD34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r8 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    r31 = r6;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
    r30 = r5;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
    }
    r28 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r8);
    }
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FAD78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FAD84;
    }
}

loc_801FAD7C:
{
    r3 = 0;
    goto loc_801FAEC0;
}

loc_801FAD84:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801FAD8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FAEB4;
    }
}

loc_801FAD90:
{
    r7 = MemoryInline::FlatRead16((r3 + 28));
    r0 = (r7 + 1);
    r7 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r7 * r0);
    r29 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FADC4;
    }
}

loc_801FADA8:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = 1;
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32(r5, r3);
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_801FAEBC;
}

loc_801FADC4:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_801FAE5C;
}

loc_801FADD4:
{
    r3 = MemoryInline::FlatRead32((r28 + 48));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801FADE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FAE14;
    }
}

loc_801FADE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FADF4;
    }
}

loc_801FADE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FADEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FAE00;
    }
}

loc_801FADF0:
{
    goto loc_801FAE34;
}

loc_801FADF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801FADF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FAE34;
    }
}

loc_801FADFC:
{
    goto loc_801FAE24;
}

loc_801FAE00:
{
    r4 = (r4 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FAE10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FAE38;
}

loc_801FAE14:
{
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FAE20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FE3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FAE38;
}

loc_801FAE24:
{
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FAE30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FE994u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FAE38;
}

loc_801FAE34:
{
    r3 = 15;
}

loc_801FAE38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FAE3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FAE44;
    }
}

loc_801FAE40:
{
    goto loc_801FAEC0;
}

loc_801FAE44:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801FAE4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FAE58;
    }
}

loc_801FAE50:
{
    r3 = 13;
    goto loc_801FAEC0;
}

loc_801FAE58:
{
    r29 = (r29 + -1);
}

loc_801FAE5C:
{
}

loc_801FAE60:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801FADD4;
    }
}

loc_801FAE64:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FAE6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FAE78;
    }
}

loc_801FAE70:
{
    r3 = 13;
    goto loc_801FAEC0;
}

loc_801FAE78:
{
    r3 = MemoryInline::FlatRead32((r28 + 48));
    r4 = 0x80250000u;
    r4 = (r4 + 12640);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801FAE98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FAEA4;
    }
}

loc_801FAE9C:
{
    r3 = 0;
    goto loc_801FAEC0;
}

loc_801FAEA4:
{
    MemoryInline::FlatWrite32(r30, r5);
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801FAEBC;
}

loc_801FAEB4:
{
    r3 = 0;
    goto loc_801FAEC0;
}

loc_801FAEBC:
{
    r3 = 0;
}

loc_801FAEC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FAD34 func_801FAD34 preserves=true fpr_mask=0x00000000
