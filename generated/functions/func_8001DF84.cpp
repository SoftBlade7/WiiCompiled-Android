#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001DF84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001DF84;

loc_8001DF84:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead16((r3 + 24));
    r0 = MemoryInline::FlatRead16((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8001DFA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001DFF8;
    }
}

loc_8001DFA8:
{
    r3 = (r1 + 80);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 20;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 84), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 80);
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 88), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001DFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E16C;
}

loc_8001DFF8:
{
    r5 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r6 = 1128;
    MemoryInline::FlatWriteRam8((r1 + 148), static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 144), r6);
    MemoryInline::FlatWriteRam32((r1 + 156), r5);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r1 + 144);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r5 = r31;
    r6 = (r1 + 8);
    r3 = 0;
    r4 = 36;
    r7 = 1;
    ctx->lr = 0x8001E048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001E04C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001E068;
    }
}

loc_8001E050:
{
    r5 = r31;
    r6 = (r1 + 8);
    r3 = 0;
    r4 = 33;
    r7 = 1;
    ctx->lr = 0x8001E068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F9DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001E068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001E06C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001E088;
    }
}

loc_8001E070:
{
    r5 = r31;
    r6 = (r1 + 8);
    r3 = 0;
    r4 = 96;
    r7 = 1;
    ctx->lr = 0x8001E088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001FB18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001E088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001E08C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001E0A8;
    }
}

loc_8001E090:
{
    r5 = r31;
    r6 = (r1 + 8);
    r3 = 0;
    r4 = 31;
    r7 = 1;
    ctx->lr = 0x8001E0A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001FC7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001E0A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001E0AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E164;
    }
}

loc_8001E0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1795));
}

loc_8001E0B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E0E4;
    }
}

loc_8001E0B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1793));
}

loc_8001E0BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E0EC;
    }
}

loc_8001E0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1794));
}

loc_8001E0C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E0F4;
    }
}

loc_8001E0C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1796));
}

loc_8001E0CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E0FC;
    }
}

loc_8001E0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1797));
}

loc_8001E0D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E104;
    }
}

loc_8001E0D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1798));
}

loc_8001E0DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E10C;
    }
}

loc_8001E0E0:
{
    goto loc_8001E114;
}

loc_8001E0E4:
{
    r31 = 18;
    goto loc_8001E118;
}

loc_8001E0EC:
{
    r31 = 20;
    goto loc_8001E118;
}

loc_8001E0F4:
{
    r31 = 21;
    goto loc_8001E118;
}

loc_8001E0FC:
{
    r31 = 33;
    goto loc_8001E118;
}

loc_8001E104:
{
    r31 = 34;
    goto loc_8001E118;
}

loc_8001E10C:
{
    r31 = 32;
    goto loc_8001E118;
}

loc_8001E114:
{
    r31 = 3;
}

loc_8001E118:
{
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r5 = (r3 + 1);
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E15Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E16C;
}

loc_8001E164:
{
    r3 = r31;
    ctx->lr = 0x8001E16Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D0F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001E16C:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001DF84 func_8001DF84 preserves=true fpr_mask=0x00000000
