#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061C1C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061C1C0;

loc_8061C1C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite8((r3 + 904), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
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

loc_8061C200:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061C21C;
    }
}

loc_8061C208:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8061C21Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8061C21C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r30 = (r3 + 52);
    r3 = r30;
    // inline leaf 0x8061B9A0 (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    // end of inlined leaf 0x8061B9A0
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8061B9BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r29 + 1200), r3);
    r4 = r3;
    r3 = r30;
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl2_0x8061B358:
{
}

loc_inl2_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl2_0x8061B368;
    }
}

loc_inl2_0x8061B360:
{
    r3 = 0;
    goto loc_inl2_cont_8061B358;
}

loc_inl2_0x8061B368:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8061C24C:
{
    MemoryInline::FlatWrite32((r29 + 1208), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061C264;
    }
}

loc_8061C254:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 13));
    MemoryInline::FlatWrite8((r29 + 1204), static_cast<uint8_t>(r0));
    goto loc_8061C26C;
}

loc_8061C264:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1204), static_cast<uint8_t>(r0));
}

loc_8061C26C:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061C1C0 func_8061C1C0 preserves=true fpr_mask=0x00000000
