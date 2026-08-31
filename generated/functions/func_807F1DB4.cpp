#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F1DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807F1DB4;

loc_807F1DB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F1DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F1E08;
    }
}

loc_807F1DE8:
{
    r4 = MemoryInline::FlatRead8((r30 + 3));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = r3;
    r3 = r31;
    r4 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A33E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F1E04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1F08;
    }
}

loc_807F1E08:
{
    r0 = MemoryInline::FlatRead32((r30 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F1E10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1F08;
    }
}

loc_807F1E14:
{
    r4 = MemoryInline::FlatRead32((r31 + 164));
    r3 = 538968064;
    r0 = (r3 + 8224);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1F08;
    }
}

loc_807F1E2C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807F1E34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1E80;
    }
}

loc_807F1E38:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r29 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807AE8B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r3 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_807F1E60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_807F1E80;
    }
}

loc_807F1E64:
{
    MemoryInline::FlatWrite32((r30 + 188), r31);
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 180), f0.d);
}

loc_807F1E80:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_807F1E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807F1ED4;
    }
}

loc_807F1E8C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r29 = r3;
    r3 = r31;
    // inline leaf 0x807AB894 (7 guest instruction(s))
}

loc_inl3_0x807AB894:
{
    r3 = MemoryInline::FlatRead32((r3 + 640));
}

loc_inl3_0x807AB89C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x807AB8A8;
    }
}

loc_inl3_0x807AB8A0:
{
    r3 = MemoryInline::FlatRead8((r3 + 24));
    goto loc_inl3_cont_807AB894;
}

loc_inl3_0x807AB8A8:
{
    r3 = 12;
}

loc_inl3_cont_807AB894:
{
    // end of inlined leaf 0x807AB894
    r3 = (r3 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_807F1EB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_807F1ED4;
    }
}

loc_807F1EB8:
{
    MemoryInline::FlatWrite32((r30 + 188), r31);
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 180), f0.d);
}

loc_807F1ED4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807F1EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1F08;
    }
}

loc_807F1EE0:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 180));
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F1EFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1F08;
    }
}

loc_807F1F00:
{
    MemoryInline::FlatWriteFloat32((r30 + 180), f1.d);
    MemoryInline::FlatWrite32((r30 + 184), r31);
}

loc_807F1F08:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F1DB4 func_807F1DB4 preserves=true fpr_mask=0x00000000
