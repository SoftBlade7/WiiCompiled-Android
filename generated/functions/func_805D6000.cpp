#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D6000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D6000;

loc_805D6000:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 4520), r0);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r31 + 4360));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D28C8 (14 guest instruction(s))
}

loc_inl0_0x805D28C8:
{
}

loc_inl0_0x805D28CC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl0_0x805D28F8;
    }
}

loc_inl0_0x805D28D0:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D28F0;
    }
}

loc_inl0_0x805D28E8:
{
    r3 = MemoryInline::FlatRead32((r4 + 464));
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F0:
{
    r3 = -1;
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F8:
{
    r3 = -1;
}

loc_inl0_cont_805D28C8:
{
    // end of inlined leaf 0x805D28C8
    MemoryInline::FlatWrite32((r31 + 4524), r3);
    r3 = (r31 + 4364);
    r4 = 1;
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_805D6050:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D605C;
    }
}

loc_805D6054:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4524), r0);
}

loc_805D605C:
{
    r3 = MemoryInline::FlatRead32((r31 + 4524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D6064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D6084;
    }
}

loc_805D6068:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 3000), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 3372), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 3744), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 4116), static_cast<uint8_t>(r3));
    goto loc_805D60E0;
}

loc_805D6084:
{
    r0 = (r3 + -21);
}

loc_805D608C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D6098;
    }
}

loc_805D6090:
{
}

loc_805D6094:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_805D60A0;
    }
}

loc_805D6098:
{
    r0 = 1;
    goto loc_805D60A4;
}

loc_805D60A0:
{
    r0 = 0;
}

loc_805D60A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D60A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D60C8;
    }
}

loc_805D60AC:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 3000), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 3372), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 3744), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 4116), static_cast<uint8_t>(r0));
    goto loc_805D60E0;
}

loc_805D60C8:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 3000), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 3372), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 3744), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 4116), static_cast<uint8_t>(r3));
}

loc_805D60E0:
{
    r4 = MemoryInline::FlatRead32((r31 + 4524));
    r3 = (r31 + 1068);
    ctx->lr = 0x805D60ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D56ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 1648));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D60F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D6108;
    }
}

loc_805D60F8:
{
    r3 = (r31 + 1068);
    r4 = 0;
    ctx->lr = 0x805D6104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BDAF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805D6114;
}

loc_805D6108:
{
    r3 = (r31 + 2260);
    r4 = 0;
    ctx->lr = 0x805D6114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BDAF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805D6114:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D6000 func_805D6000 preserves=true fpr_mask=0x00000000
