#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D5700(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D5700;

loc_806D5700:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_806D570C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D5730;
    }
}

loc_806D5728:
{
    r3 = 0;
    goto loc_806D58A4;
}

loc_806D5730:
{
    r6 = MemoryInline::FlatRead32((r4 + 32));
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r5 = MemoryInline::FlatRead16((r6 + 4));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_806D5744:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D5750;
    }
}

loc_806D5748:
{
    r3 = 0;
    goto loc_806D58A4;
}

loc_806D5750:
{
}

loc_806D5754:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_806D5818;
    }
}

loc_806D5758:
{
    r0 = MemoryInline::FlatRead16((r6 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r3 + 260));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = MemoryInline::FlatRead16((r6 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4_addr_1 = (r4 + r3);
    r31 = MemoryInline::FlatRead16(r4_addr_1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r0 = (r31 + -2);
    r4_addr_2 = (r4 + r3);
    r30 = MemoryInline::FlatRead16(r4_addr_2);
    r31 = (r0 & 65535);
}

loc_806D5780:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(-1))) {
        goto loc_806D57A4;
    }
}

loc_806D5784:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 8880));
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x806F10FC
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r3 + -1);
    r31 = (r0 & 65535);
    goto loc_806D57C8;
}

loc_806D57A4:
{
}

loc_806D57A8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(-2))) {
        goto loc_806D57C8;
    }
}

loc_806D57AC:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 8880));
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x806F10FC
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r3 + -2);
    r31 = (r0 & 65535);
}

loc_806D57C8:
{
    r28 = 0x809C0000u;
    r0 = (r30 + 2);
    r3 = MemoryInline::FlatRead32((r28 + 8880));
    r30 = (r0 & 65535);
    r4 = 1;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x806F10FC
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_806D57E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D57F4;
    }
}

loc_806D57EC:
{
    r30 = 0;
    goto loc_806D5888;
}

loc_806D57F4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8880));
    r4 = 1;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x806F10FC
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_806D580C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D5888;
    }
}

loc_806D5810:
{
    r30 = 1;
    goto loc_806D5888;
}

loc_806D5818:
{
    r0 = MemoryInline::FlatRead16((r6 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r3 + 264));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r0 = MemoryInline::FlatRead16((r6 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4_addr_3 = (r4 + r3);
    r31 = MemoryInline::FlatRead16(r4_addr_3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r0 = (r31 + -2);
    r4_addr_4 = (r4 + r3);
    r30 = MemoryInline::FlatRead16(r4_addr_4);
    r31 = (r0 & 65535);
}

loc_806D5840:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(-1))) {
        goto loc_806D5860;
    }
}

loc_806D5844:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 8880));
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x806F10FC
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r3 + -1);
    r31 = (r0 & 65535);
}

loc_806D5860:
{
    r3 = 0x809C0000u;
    r0 = (r30 + 2);
    r3 = MemoryInline::FlatRead32((r3 + 8880));
    r30 = (r0 & 65535);
    r4 = 0;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // end of inlined leaf 0x806F10FC
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_806D5880:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D5888;
    }
}

loc_806D5884:
{
    r30 = 0;
}

loc_806D5888:
{
    r4 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -272));
    r4 = r31;
    r5 = r30;
    f2.d = f1.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ED428u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_806D58A4:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D5700 func_806D5700 preserves=true fpr_mask=0x00000000
