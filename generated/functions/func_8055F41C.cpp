#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055F41C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8055F41C;

loc_8055F41C:
{
    MemoryInline::FlatWriteRam32((r1 + -1056), r1);
    r1 = (r1 + -1056);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1060), r0);
    MemoryInline::FlatWriteRam32((r1 + 1036), r27);
    MemoryInline::FlatWriteRam32((r1 + 1040), r28);
    MemoryInline::FlatWriteRam32((r1 + 1044), r29);
    MemoryInline::FlatWriteRam32((r1 + 1048), r30);
    MemoryInline::FlatWriteRam32((r1 + 1052), r31);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = 0;
    r30 = 0;
    goto loc_8055F49C;
}

loc_8055F444:
{
    r3 = r27;
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E9F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r5 = r28;
    r6 = r29;
    r3 = (r1 + 8);
    r8 = (r1 + 12);
    r4 = 0;
    r7 = 0;
    r9 = 255;
    ctx->lr = 0x8055F474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80228B18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r3 & 65535);
}

loc_8055F47C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8055F498;
    }
}

loc_8055F48C:
{
}

loc_8055F490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055F498;
    }
}

loc_8055F494:
{
    r31 = 1;
}

loc_8055F498:
{
    r30 = (r30 + 1);
}

loc_8055F49C:
{
    r3 = r27;
    // inline leaf 0x8004EA50 (13 guest instruction(s))
}

loc_inl0_0x8004EA50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_inl0_0x8004EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA68;
    }
}

loc_inl0_0x8004EA60:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004EA6C;
}

loc_inl0_0x8004EA68:
{
    r3 = 0;
}

loc_inl0_0x8004EA6C:
{
}

loc_inl0_0x8004EA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA7C;
    }
}

loc_inl0_0x8004EA74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004EA50;
}

loc_inl0_0x8004EA7C:
{
    r3 = 0;
}

loc_inl0_cont_8004EA50:
{
    // end of inlined leaf 0x8004EA50
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8055F4A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8055F444;
    }
}

loc_8055F4AC:
{
    r3 = r31;
    r27 = MemoryInline::FlatRead32((r1 + 1036));
    r28 = MemoryInline::FlatRead32((r1 + 1040));
    r29 = MemoryInline::FlatRead32((r1 + 1044));
    r30 = MemoryInline::FlatRead32((r1 + 1048));
    r31 = MemoryInline::FlatRead32((r1 + 1052));
    r0 = MemoryInline::FlatRead32((r1 + 1060));
    ctx->lr = r0;
    r1 = (r1 + 1056);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF827FF gpr_write=0xFFF81FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055F41C func_8055F41C preserves=true fpr_mask=0x00000000
