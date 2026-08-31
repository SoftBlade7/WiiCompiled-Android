#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CB198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807CB198;

loc_807CB198:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 712));
    r5 = MemoryInline::FlatRead32((r3 + 720));
    MemoryInline::FlatWrite32((r3 + 716), r4);
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 724), r5);
    MemoryInline::FlatWrite8((r3 + 78), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 77), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 & 268435456);
    r0_mrot_0 = (r4 & 8);
    r0_mdest_0 = (r0 & -9);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_807CB1E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CB230;
    }
}

loc_807CB1EC:
{
    r30 = 0;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807CB200:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CB224;
    }
}

loc_807CB204:
{
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x8057EFF8 (11 guest instruction(s))
}

loc_inl2_0x8057EFF8:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23324));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_inl2_0x8057F010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl2_0x8057F01C;
    }
}

loc_inl2_0x8057F014:
{
    r3 = 0;
    goto loc_inl2_cont_8057EFF8;
}

loc_inl2_0x8057F01C:
{
    r3 = MemoryInline::FlatRead32((r3 + 204));
}

loc_inl2_cont_8057EFF8:
{
    // end of inlined leaf 0x8057EFF8
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_807CB21C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CB224;
    }
}

loc_807CB220:
{
    r30 = 1;
}

loc_807CB224:
{
}

loc_807CB228:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_807CB230;
    }
}

loc_807CB22C:
{
    r29 = 0;
}

loc_807CB230:
{
}

loc_807CB234:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_807CB26C;
    }
}

loc_807CB238:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
}

loc_807CB24C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CB264;
    }
}

loc_807CB250:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 16777216);
    r0_mrot_1 = (r3 & 8192);
    r0_mdest_1 = (r0 & -8193);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_807CB25C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CB264;
    }
}

loc_807CB260:
{
    r4 = 1;
}

loc_807CB264:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CB268:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CB2D4;
    }
}

loc_807CB26C:
{
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807CB27C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CB28C;
    }
}

loc_807CB280:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r0));
    goto loc_807CB2D4;
}

loc_807CB28C:
{
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CB29C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CB2AC;
    }
}

loc_807CB2A0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 78), static_cast<uint8_t>(r0));
    goto loc_807CB2D4;
}

loc_807CB2AC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CB2BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CB2CC;
    }
}

loc_807CB2C0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r0));
    goto loc_807CB2D4;
}

loc_807CB2CC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 78), static_cast<uint8_t>(r0));
}

loc_807CB2D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80787D18u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CB2E8:
{
    r0 = cr;
    r3 = 0x809C0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1);
    MemoryInline::FlatWrite8((r31 + 180), static_cast<uint8_t>(r0));
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r0 = MemoryInline::FlatRead8((r3 + 37));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CB308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CB32C;
    }
}

loc_807CB30C:
{
    r3 = r31;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r30 = (r3 & 255);
    // inline leaf 0x8078DDF4 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 12088));
    r3 = MemoryInline::FlatRead8((r3 + 492));
    // end of inlined leaf 0x8078DDF4
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_807CB324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CB32C;
    }
}

loc_807CB328:
{
    r29 = 1;
}

loc_807CB32C:
{
    MemoryInline::FlatWrite8((r31 + 214), static_cast<uint8_t>(r29));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CB198 func_807CB198 preserves=true fpr_mask=0x00000000
