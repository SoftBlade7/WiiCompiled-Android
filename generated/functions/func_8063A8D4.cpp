#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063A8D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8063A8D4;

loc_8063A8D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8063A8E0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063A9C4;
    }
}

loc_8063A900:
{
}

loc_8063A904:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8063A92C;
    }
}

loc_8063A908:
{
}

loc_8063A90C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8063A93C;
    }
}

loc_8063A910:
{
}

loc_8063A914:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8063A94C;
    }
}

loc_8063A918:
{
}

loc_8063A91C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8063A95C;
    }
}

loc_8063A920:
{
}

loc_8063A924:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_8063A96C;
    }
}

loc_8063A928:
{
    goto loc_8063A978;
}

loc_8063A92C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r30 = (r3 + 39);
    goto loc_8063A978;
}

loc_8063A93C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r30 = (r3 + 46);
    goto loc_8063A978;
}

loc_8063A94C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r30 = (r3 + 53);
    goto loc_8063A978;
}

loc_8063A95C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r30 = (r3 + 59);
    goto loc_8063A978;
}

loc_8063A96C:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r30 = (r3 + 65);
}

loc_8063A978:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8063A988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063A9D0;
    }
}

loc_8063A98C:
{
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl0_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl0_0x80622EA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_inl0_0x80622EB4;
    }
}

loc_inl0_0x80622EAC:
{
    r3 = 0;
    goto loc_inl0_cont_80622EA0;
}

loc_inl0_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl0_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8063A994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063A9D0;
    }
}

loc_8063A998:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl1_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl1_0x80622EA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_inl1_0x80622EB4;
    }
}

loc_inl1_0x80622EAC:
{
    r3 = 0;
    goto loc_inl1_cont_80622EA0;
}

loc_inl1_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl1_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(87));
}

loc_8063A9AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8063A9D0;
    }
}

loc_8063A9B0:
{
    r3 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    ctx->lr = 0x8063A9C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80868794u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8063A9D0;
}

loc_8063A9C4:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r30 = (r3 + 71);
}

loc_8063A9D0:
{
    r4 = 0x808A0000u;
    r3 = r28;
    r4 = (r4 + -30080);
    r5 = r30;
    r4 = (r4 + 83);
    ctx->lr = 0x8063A9E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8063A8D4 func_8063A8D4 preserves=true fpr_mask=0x00000000
