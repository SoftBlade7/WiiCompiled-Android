#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023C328(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023C328;

loc_8023C328:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r1 + 9);
}

loc_8023C338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023C350;
    }
}

loc_8023C33C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r7 = MemoryInline::FlatRead32((r3 + 200));
    r0 = (r0 - r5);
    r7_addr_1 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7_addr_1);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_8023C350:
{
    r0 = (r1 + 8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r1)) + static_cast<uint64_t>(static_cast<uint32_t>(8)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8023C354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023C370;
    }
}

loc_8023C358:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 200));
    r0 = (r0 - r5);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_8023C370:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r3 = r4;
    r0 = (r0 + r6);
    r4 = (r0 & 255);
    // inline leaf 0x8006DCF0 (9 guest instruction(s))
}

loc_inl0_0x8006DCF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x8006DCF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8006DD00;
    }
}

loc_inl0_0x8006DCF8:
{
    r4 = 0;
    goto loc_inl0_0x8006DD0C;
}

loc_inl0_0x8006DD00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_inl0_0x8006DD04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8006DD0C;
    }
}

loc_inl0_0x8006DD08:
{
    r4 = 255;
}

loc_inl0_0x8006DD0C:
{
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
}

loc_inl0_cont_8006DCF0:
{
    // end of inlined leaf 0x8006DCF0
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000009B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8023C328 func_8023C328 preserves=true fpr_mask=0x00000000
